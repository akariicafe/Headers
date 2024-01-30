@class BKDevicePearl, BKDeviceTouchID;

@interface PKBiometrics : NSObject

@property (retain, nonatomic) BKDevicePearl *pearlDevice;
@property (retain, nonatomic) BKDeviceTouchID *touchIDDevice;

+ (id)sharedInstance;

- (id)deviceForType:(long long)a0;
- (long long)deviceTypeForIdentityType:(long long)a0;
- (id)identitiesForIdentityType:(long long)a0;
- (long long)maximumIdentityCountForIdentityType:(long long)a0;
- (id)nextIdentityNameForIdentityType:(long long)a0;
- (id)nameForIdentity:(id)a0;
- (BOOL)setName:(id)a0 forIdentity:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (BOOL)removeIdentity:(id)a0;

@end
