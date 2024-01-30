@class NSString, NSMapTable;

@interface HMDModernTransportDeviceReachabilityObserver : HMFObject <HMDModernRemoteMessageTransportReachabilityDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMapTable *_deviceToListenersMap;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)init;
- (void)transport:(id)a0 device:(id)a1 didAppearReachable:(BOOL)a2;
- (void)addListener:(id)a0 forDevice:(id)a1;
- (void)removeListener:(id)a0 forDevice:(id)a1;
- (id)isDeviceReachable:(id)a0;

@end
