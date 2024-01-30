@class NSString, NSObject;
@protocol OS_os_log;

@interface HMDDeviceSetupClientSession : HMDDeviceSetupSessionInternal <HMFLogging> {
    NSObject<OS_os_log> *_logger;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allowedClasses;
+ (id)logCategory;
+ (long long)role;
+ (BOOL)isSupported;

- (id)initWithHomeManager:(id)a0;
- (void).cxx_destruct;
- (BOOL)processSessionData:(id)a0 fromBundle:(id)a1 outAccessoryUUID:(id *)a2 error:(id *)a3;

@end
