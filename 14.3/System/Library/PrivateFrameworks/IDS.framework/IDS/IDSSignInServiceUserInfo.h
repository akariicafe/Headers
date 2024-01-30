@interface IDSSignInServiceUserInfo : NSObject

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) unsigned long long status;

- (id)initWithUserType:(unsigned long long)a0 status:(unsigned long long)a1;
- (id)description;

@end
