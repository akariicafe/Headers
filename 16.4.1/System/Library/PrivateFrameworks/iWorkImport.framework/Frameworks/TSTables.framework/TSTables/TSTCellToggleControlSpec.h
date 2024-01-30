@interface TSTCellToggleControlSpec : TSTCellSpec

+ (id)instanceWithArchive:(const void *)a0 unarchiver:(id)a1;
+ (id)cellSpecFromTSKFormat:(id)a0;
+ (id)toggleControlSpec;

- (unsigned int)interactionType;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithArchive:(const void *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (id)asToggleControlSpec;
- (BOOL)validateFormatAndValue:(id)a0;

@end
