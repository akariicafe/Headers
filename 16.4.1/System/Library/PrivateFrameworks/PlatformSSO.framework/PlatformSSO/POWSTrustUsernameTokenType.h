@class NSString;

@interface POWSTrustUsernameTokenType : POWSTrustBaseRequestType

@property (copy, nonatomic) NSString *Id;
@property (copy, nonatomic) NSString *Username;
@property (copy, nonatomic) NSString *Password;

+ (id)definition;

- (id)description;
- (void).cxx_destruct;

@end
