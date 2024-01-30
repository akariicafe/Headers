@interface HFMutableSetDiff : HFSetDiff

@property (readonly, nonatomic) BOOL hasChanges;

- (void)deleteAllObjects;
- (void)deleteObject:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithFromSet:(id)a0;
- (void)updateObject:(id)a0;
- (void)addObject:(id)a0;
- (void)_updateHasChanges;

@end
