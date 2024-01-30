@class NSCountedSet;

@interface CKScheduledUpdater : CKManualUpdater

@property (retain, nonatomic) NSCountedSet *holdingUpdatesKeys;
@property (nonatomic) BOOL updateSynchronouslyIfPossible;

- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)setNeedsUpdate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)updateIfNeeded;
- (void)endHoldingAllUpdatesForKey:(id)a0;
- (id)description;
- (BOOL)isHoldingUpdates;
- (void)beginHoldingUpdatesForKey:(id)a0;
- (void)endHoldingUpdatesForKey:(id)a0;
- (BOOL)isHoldingUpdatesForKey:(id)a0;
- (void)endHoldingAllUpdates;
- (void)invalidate;

@end
