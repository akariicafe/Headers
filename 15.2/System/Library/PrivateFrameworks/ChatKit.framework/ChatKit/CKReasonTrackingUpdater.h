@class NSCountedSet, NSString;
@protocol CKReasonTrackingUpdaterDelegate;

@interface CKReasonTrackingUpdater : NSObject

@property (retain, nonatomic) NSCountedSet *reasonsForNeedsUpdates;
@property (retain, nonatomic) NSCountedSet *reasonsForHoldingUpdates;
@property (nonatomic) BOOL hasPendingDeferredUpdate;
@property (copy, nonatomic) NSString *name;
@property (weak, nonatomic) id<CKReasonTrackingUpdaterDelegate> delegate;
@property (readonly, nonatomic) BOOL isHoldingUpdates;

- (BOOL)needsUpdate;
- (id)description;
- (void).cxx_destruct;
- (void)_scheduleDeferredUpdateFollowingHoldForReason:(id)a0;
- (void)_triggerNeedsUpdateFollowingHoldForReason:(id)a0;
- (void)_handleReasonsForHoldingUpdatesChangeForReason:(id)a0 updateTriggeredIfNotHeldShouldBeDeferred:(BOOL)a1;
- (BOOL)isHoldingUpdatesForReason:(id)a0;
- (void)updateImmediatelyWithReason:(id)a0;
- (void)updateImmediatelyIfNeeded;
- (id)initWithName:(id)a0 delegate:(id)a1;
- (void)beginHoldingUpdatesForReason:(id)a0;
- (void)endHoldingUpdatesForReason:(id)a0 updateTriggeredIfNotHeldShouldBeDeferred:(BOOL)a1;
- (void)setNeedsDeferredUpdateWithReason:(id)a0;
- (void)endAllHoldsOnUpdatesForReason:(id)a0 updateTriggeredIfNotHeldShouldBeDeferred:(BOOL)a1;

@end
