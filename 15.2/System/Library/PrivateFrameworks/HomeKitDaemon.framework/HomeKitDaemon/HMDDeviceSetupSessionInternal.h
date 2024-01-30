@class NSData, HMDHomeManager, NSDictionary;

@interface HMDDeviceSetupSessionInternal : HMFObject

@property (nonatomic) unsigned long long state;
@property (readonly, weak) HMDHomeManager *homeManager;
@property (retain, nonatomic) NSData *sessionData;
@property (retain, nonatomic) NSDictionary *userInfo;

+ (id)allowedClasses;
+ (long long)role;
+ (BOOL)isSupported;

- (id)initWithHomeManager:(id)a0;
- (void).cxx_destruct;
- (BOOL)processSessionData:(id)a0 fromBundle:(id)a1 outAccessoryUUID:(id *)a2 error:(id *)a3;

@end
