@class NSString;

@interface POWSTrustToType : POWSTrustBaseRequestType

@property (copy, nonatomic) NSString *stringValue;
@property (copy, nonatomic) NSString *mustUnderstand;

+ (id)definition;

- (id)description;
- (void).cxx_destruct;

@end
