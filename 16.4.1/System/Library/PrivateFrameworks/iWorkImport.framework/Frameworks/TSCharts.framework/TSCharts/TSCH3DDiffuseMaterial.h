@interface TSCH3DDiffuseMaterial : TSCH3DTexturesMaterial

+ (id)instanceWithArchive:(const void *)a0 unarchiver:(id)a1;

- (id)initWithArchive:(const void *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (id)defaultShaderVariables;

@end
