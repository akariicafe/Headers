@interface TSTStrokeSelection : TSKSelection

@property (readonly, nonatomic) unsigned int mask;

+ (Class)archivedSelectionClass;
+ (id)strokeSelectionWithMask:(unsigned int)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithArchive:(const void *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (id)initWithStrokeVisibilityMask:(unsigned int)a0;

@end
