@class NSString, NSMutableDictionary, HMFMessageDispatcher, NSObject;
@protocol OS_dispatch_queue, HMDWACBrowserDelegate, HMDWACScanner;

@interface HMDWACBrowser : NSObject <HMDWACScannerDelegate, HMFLogging> {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    id<HMDWACScanner> _wacScanner;
    NSMutableDictionary *_unassociatedAccessories;
    HMFMessageDispatcher *_messageDispatcher;
}

@property (weak, nonatomic) id<HMDWACBrowserDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property BOOL scanIsActive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)setDelegate:(id)a0 queue:(id)a1;
- (void).cxx_destruct;
- (void)scannerDidStop:(id)a0;
- (void)clearBackoff;
- (id)initWithWACScanner:(id)a0 messageDispatcher:(id)a1;
- (void)requestBackoff;
- (void)scanner:(id)a0 didAddDevice:(id)a1;
- (void)scanner:(id)a0 didError:(id)a1;
- (void)scanner:(id)a0 didRemoveDevice:(id)a1;
- (void)scanner:(id)a0 didUpdateDevice:(id)a1;
- (void)startBrowsingForAccessories;
- (void)startBrowsingForAirPlayWACAccessoriesWithBrowser:(id)a0;
- (void)stopBrowsingForAccessories;

@end
