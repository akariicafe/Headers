@class NSString, NSArray, NSData;

@interface NBPhoneNumberDesc : NSObject

@property (readonly, nonatomic) NSString *nationalNumberPattern;
@property (readonly, nonatomic) NSString *possibleNumberPattern;
@property (readonly, nonatomic) NSArray *possibleLength;
@property (readonly, nonatomic) NSArray *possibleLengthLocalOnly;
@property (readonly, nonatomic) NSString *exampleNumber;
@property (readonly, nonatomic) NSData *nationalNumberMatcherData;
@property (readonly, nonatomic) NSData *possibleNumberMatcherData;

- (void).cxx_destruct;
- (id)description;
- (id)initWithEntry:(id)a0;

@end
