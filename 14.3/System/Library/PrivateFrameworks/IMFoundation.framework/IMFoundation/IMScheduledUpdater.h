@class NSCountedSet;

@interface IMScheduledUpdater : IMManualUpdater

@property (retain, nonatomic) NSCountedSet *holdingUpdatesKeys;

- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)setNeedsUpdate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)updateIfNeeded;
- (id)description;
- (BOOL)isHoldingUpdates;
- (void)beginHoldingUpdatesForKey:(id)a0;
- (void)endHoldingUpdatesForKey:(id)a0;
- (void)endHoldingUpdatesForAllKeys;
- (BOOL)isHoldingUpdatesForKey:(id)a0;
- (void)invalidate;

@end
