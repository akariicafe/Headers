@class NSString, AFInterstitialConfiguration, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, AFInterstitialProviderDelegate;

@interface AFInterstitialProvider : NSObject <AFInvalidating> {
    NSObject<OS_dispatch_queue> *_queue;
    AFInterstitialConfiguration *_configuration;
    NSMutableArray *_pendingActions;
    id _context;
    id<AFInterstitialProviderDelegate> _delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 recordRoute:(id)a1 isVoiceTrigger:(BOOL)a2 isDucking:(BOOL)a3 isTwoShot:(BOOL)a4 speechEndHostTime:(unsigned long long)a5 context:(id)a6 delegate:(id)a7;
- (void)dealloc;
- (void)_invalidate;
- (void)_performNextActionWithExpectedDelay:(double)a0;
- (void)invalidate;

@end
