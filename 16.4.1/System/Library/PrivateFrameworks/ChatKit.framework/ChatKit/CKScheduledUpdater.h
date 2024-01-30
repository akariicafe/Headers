@class NSCountedSet;

@interface CKScheduledUpdater : CKManualUpdater

@property (retain, nonatomic) NSCountedSet *holdingUpdatesKeys;
@property (nonatomic) BOOL updateSynchronouslyIfPossible;

- (void)setNeedsUpdate;
- (void)updateIfNeeded;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)dealloc;
- (id)description;
- (void)invalidate;
- (void).cxx_destruct;
- (void)beginHoldingUpdatesForKey:(id)a0;
- (void)endHoldingAllUpdates;
- (void)endHoldingAllUpdatesForKey:(id)a0;
- (void)endHoldingUpdatesForKey:(id)a0;
- (BOOL)isHoldingUpdates;
- (BOOL)isHoldingUpdatesForKey:(id)a0;

@end
