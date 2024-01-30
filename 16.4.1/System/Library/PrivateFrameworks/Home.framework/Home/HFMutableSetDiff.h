@interface HFMutableSetDiff : HFSetDiff

@property (readonly, nonatomic) BOOL hasChanges;

- (void)addObject:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)updateObjects:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)deleteAllObjects;
- (void)deleteObject:(id)a0;
- (id)initWithFromSet:(id)a0;
- (void)addObjects:(id)a0;
- (void)_updateHasChanges;
- (void)deleteObjects:(id)a0;
- (void)updateObject:(id)a0;

@end
