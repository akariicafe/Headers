@interface PUImageEditPluginSession : PUEditPluginSession

@property (nonatomic) BOOL allowLivePhotoExtensions;

- (id)imageDataSource;
- (unsigned long long)pluginManagerMediaType;
- (void)loadItemProviderWithSupportedAdjustmentData:(id)a0 loadHandler:(id /* block */)a1;
- (void)shouldLaunchPlugin:(id)a0 completion:(id /* block */)a1;

@end
