@class NSCountedSet;

@interface IMScheduledUpdater : IMManualUpdater

@property (retain, nonatomic) NSCountedSet *holdingUpdatesKeys;

- (void)updateIfNeeded;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (BOOL)isHoldingUpdates;
- (void)beginHoldingUpdatesForKey:(id)a0;
- (void)endHoldingUpdatesForKey:(id)a0;
- (void)endHoldingUpdatesForAllKeys;
- (BOOL)isHoldingUpdatesForKey:(id)a0;
- (void)setNeedsUpdate;
- (id)description;
- (void).cxx_destruct;
- (void)invalidate;
- (void)dealloc;

@end
