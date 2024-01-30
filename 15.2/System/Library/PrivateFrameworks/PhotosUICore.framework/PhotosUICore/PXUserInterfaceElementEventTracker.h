@class PXUpdater, NSMutableDictionary;

@interface PXUserInterfaceElementEventTracker : PXObservable <PXUserInterfaceElementEventTracker>

@property (nonatomic) BOOL hasAppeared;
@property (nonatomic) BOOL isAppActive;
@property (readonly, nonatomic) BOOL isVisible;
@property (readonly, nonatomic) double currentTimestamp;
@property (readonly, nonatomic) PXUpdater *updater;
@property (copy, nonatomic) NSMutableDictionary *payload;

- (void)_applicationDidBecomeActive:(id)a0;
- (void)_applicationWillResignActive:(id)a0;
- (void)didPerformChanges;
- (void)_updateIsVisible;
- (void)didDisappear;
- (void)_setNeedsUpdate;
- (void)didAppear;
- (void).cxx_destruct;
- (id)init;
- (id)finalPayloadWithPayload:(id)a0;
- (double)timeIntervalSinceTimestamp:(double)a0;
- (void)setIsVisible:(BOOL)a0;
- (double)timeIntervalBetweenTimestamp:(double)a0 andTimestamp:(double)a1;
- (void)_invalidateIsVisible;

@end
