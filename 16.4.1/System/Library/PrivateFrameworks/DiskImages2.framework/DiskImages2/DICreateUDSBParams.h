@interface DICreateUDSBParams : DICreateParams

@property (nonatomic) unsigned long long sparseBundleBandSize;

- (BOOL)checkExistingFileWithIsDirectory:(BOOL)a0 error:(id *)a1;
- (void)createDiskImageParamsXPC;
- (id)initWithURL:(id)a0 numBlocks:(unsigned long long)a1 error:(id *)a2;

@end
