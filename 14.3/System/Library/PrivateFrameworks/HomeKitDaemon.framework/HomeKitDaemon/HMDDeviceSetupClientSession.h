@class NSString;

@interface HMDDeviceSetupClientSession : HMDDeviceSetupSessionInternal <HMFLogging>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allowedClasses;
+ (BOOL)isSupported;
+ (id)logCategory;
+ (long long)role;

- (BOOL)processSessionData:(id)a0 error:(id *)a1;

@end
