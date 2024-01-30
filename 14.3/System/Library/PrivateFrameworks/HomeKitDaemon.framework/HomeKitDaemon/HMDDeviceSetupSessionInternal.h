@class NSData, HMDHomeManager, NSDictionary;

@interface HMDDeviceSetupSessionInternal : HMFObject

@property (nonatomic) unsigned long long state;
@property (readonly, weak) HMDHomeManager *homeManager;
@property (retain, nonatomic) NSData *sessionData;
@property (retain, nonatomic) NSDictionary *userInfo;

+ (id)allowedClasses;
+ (BOOL)isSupported;
+ (long long)role;

- (void).cxx_destruct;
- (id)initWithHomeManager:(id)a0;
- (BOOL)processSessionData:(id)a0 error:(id *)a1;

@end
