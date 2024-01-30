@interface HFMutableSetDiff : HFSetDiff

@property (readonly, nonatomic) BOOL hasChanges;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addObject:(id)a0;
- (void)deleteAllObjects;
- (void)updateObject:(id)a0;
- (void)deleteObject:(id)a0;
- (void)updateObjects:(id)a0;
- (id)initWithFromSet:(id)a0;
- (void)deleteObjects:(id)a0;
- (void)addObjects:(id)a0;
- (void)_updateHasChanges;

@end
