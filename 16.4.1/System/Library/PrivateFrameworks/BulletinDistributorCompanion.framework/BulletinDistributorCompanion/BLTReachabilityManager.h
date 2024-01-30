@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface BLTReachabilityManager : NSObject <PCInterfaceMonitorDelegate> {
    NSObject<OS_dispatch_queue> *_updateQueue;
}

@property (getter=isInternetReachable) BOOL internetReachable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)interfaceLinkQualityChanged:(id)a0 previousLinkQuality:(int)a1;
- (void)interfaceReachabilityChanged:(id)a0;
- (id)init;
- (void)interfaceRadioHotnessChanged:(id)a0;
- (void).cxx_destruct;

@end
