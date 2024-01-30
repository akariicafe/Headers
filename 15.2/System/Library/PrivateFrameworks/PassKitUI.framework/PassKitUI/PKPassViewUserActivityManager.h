@class NSString, NSObject, NSUserActivity;
@protocol OS_dispatch_queue;

@interface PKPassViewUserActivityManager : NSObject <PKForegroundActiveArbiterObserver> {
    NSUserActivity *_currentUserActivity;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _isForegroundActive;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)foregroundActiveArbiter:(id)a0 didUpdateForegroundActiveState:(struct { BOOL x0; BOOL x1; })a1;
- (void).cxx_destruct;
- (id)init;
- (id)_init;
- (void)dealloc;
- (void)startedViewingPass:(id)a0;
- (void)endedViewingPass;
- (id)_currentUserActivityPassUniqueID;
- (void)_endedViewingPass;
- (BOOL)_shouldDonateActivity:(id)a0;
- (id)_displayNameForPass:(id)a0;
- (id)_templateNameForPass:(id)a0;

@end
