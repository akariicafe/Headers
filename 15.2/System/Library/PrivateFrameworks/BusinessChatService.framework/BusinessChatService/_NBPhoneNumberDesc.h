@class NSString, NSArray, NSData;

@interface _NBPhoneNumberDesc : NSObject

@property (readonly, nonatomic) NSString *nationalNumberPattern;
@property (readonly, nonatomic) NSString *possibleNumberPattern;
@property (readonly, nonatomic) NSArray *possibleLength;
@property (readonly, nonatomic) NSArray *possibleLengthLocalOnly;
@property (readonly, nonatomic) NSString *exampleNumber;
@property (readonly, nonatomic) NSData *nationalNumberMatcherData;
@property (readonly, nonatomic) NSData *possibleNumberMatcherData;

- (id)description;
- (void).cxx_destruct;
- (id)initWithEntry:(id)a0;

@end
