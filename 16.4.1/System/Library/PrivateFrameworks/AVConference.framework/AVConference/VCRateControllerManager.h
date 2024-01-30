@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface VCRateControllerManager : VCObject {
    NSMutableDictionary *_shareProfileDictionary;
    NSMutableDictionary *_rateSharingClientMap;
    NSObject<OS_dispatch_queue> *_delegateQueue;
}

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (unsigned int)countRateControllersForInterfaceType:(id)a0;
- (BOOL)deregisterRateSharingClient:(id)a0;
- (BOOL)registerRateSharingClient:(id)a0 forInterfaceType:(unsigned int)a1;
- (void)updateShareProfileForInterfaceType:(id)a0;

@end
