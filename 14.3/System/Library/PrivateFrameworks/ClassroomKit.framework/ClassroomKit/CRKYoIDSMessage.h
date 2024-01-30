@class NSString, NSDictionary;

@interface CRKYoIDSMessage : NSObject <CRKIDSMessage>

@property (readonly, copy, nonatomic) NSString *message;
@property (readonly, nonatomic) long long messageType;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;

+ (id)instanceWithDictionary:(id)a0;

- (void).cxx_destruct;
- (id)initWithMessage:(id)a0;

@end
