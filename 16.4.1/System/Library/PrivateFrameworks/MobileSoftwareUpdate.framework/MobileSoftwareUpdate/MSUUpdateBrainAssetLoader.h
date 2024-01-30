@class MAAsset;

@interface MSUUpdateBrainAssetLoader : MSUUpdateBrainLoader

@property (retain, nonatomic) MAAsset *updateAsset;

- (BOOL)cancel:(id *)a0;
- (void)dealloc;
- (id)initWithUpdateAsset:(id)a0;
- (void)loadUpdateBrainWithMAOptions:(id)a0 progressHandler:(id /* block */)a1;
- (void)adjustOptions:(id)a0 completion:(id /* block */)a1;
- (void)adjustMAOptions:(id)a0 completion:(id /* block */)a1;
- (void)loadUpdateBrainWithOptions:(id)a0 progressHandler:(id /* block */)a1;
- (BOOL)purgeUpdateBrains:(id *)a0;
- (long long)requiredDiskSpace:(id *)a0;

@end
