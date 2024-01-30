@interface DICreateRAWParams : DICreateParams

- (id)initWithURL:(id)a0 numBlocks:(unsigned long long)a1 error:(id *)a2;
- (void)createDiskImageParamsXPC;
- (BOOL)checkExistingFileWithIsDirectory:(BOOL)a0 error:(id *)a1;

@end
