@class NSUUID;

@interface SFAuthenticateAccountHomeUserInfo : NSObject

@property (readonly, nonatomic) NSUUID *homeUniqueIdentifier;
@property (readonly, nonatomic) NSUUID *userUniqueIdentifier;

- (void).cxx_destruct;
- (id)initWithHomeUUID:(id)a0 userUUID:(id)a1;

@end
