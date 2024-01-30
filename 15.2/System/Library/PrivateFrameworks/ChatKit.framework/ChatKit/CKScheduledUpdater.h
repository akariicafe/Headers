@class NSCountedSet;

@interface CKScheduledUpdater : CKManualUpdater

@property (retain, nonatomic) NSCountedSet *holdingUpdatesKeys;
@property (nonatomic) BOOL updateSynchronouslyIfPossible;

- (void)updateIfNeeded;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (BOOL)isHoldingUpdates;
- (void)beginHoldingUpdatesForKey:(id)a0;
- (void)endHoldingUpdatesForKey:(id)a0;
- (BOOL)isHoldingUpdatesForKey:(id)a0;
- (void)setNeedsUpdate;
- (id)description;
- (void).cxx_destruct;
- (void)endHoldingAllUpdatesForKey:(id)a0;
- (void)invalidate;
- (void)endHoldingAllUpdates;
- (void)dealloc;

@end
