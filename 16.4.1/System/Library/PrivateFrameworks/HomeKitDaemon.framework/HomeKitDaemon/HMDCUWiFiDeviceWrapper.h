@class NSUUID, NSString, CUWiFiDevice, CUWACSession, NSObject;
@protocol OS_dispatch_queue;

@interface HMDCUWiFiDeviceWrapper : NSObject <HMDWACDevice, HMFLogging> {
    CUWiFiDevice *_cuWiFiDevice;
    CUWACSession *_wacSession;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) NSString *deviceID;
@property (readonly, nonatomic) NSString *ssid;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) BOOL isConfigured;
@property (readonly, nonatomic) BOOL supportsAirPlay2;
@property (readonly, nonatomic) id underlyingDevice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)ssid;
- (id)logIdentifier;
- (void)startConfigurationWithCompletionHandler:(id /* block */)a0;
- (id)underlyingDevice;
- (BOOL)isConfigured;
- (void).cxx_destruct;
- (id)name;
- (BOOL)supportsAirPlay2;
- (void)cancelConfigurationWithCompletionHandler:(id /* block */)a0;
- (id)initWithCUWiFiDevice:(id)a0 dispatchQueue:(id)a1;

@end
