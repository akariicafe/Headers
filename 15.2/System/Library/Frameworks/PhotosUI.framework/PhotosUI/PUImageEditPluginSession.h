@interface PUImageEditPluginSession : PUEditPluginSession

@property (nonatomic) BOOL allowLivePhotoExtensions;

- (void)loadItemProviderWithSupportedAdjustmentData:(id)a0 loadHandler:(id /* block */)a1;
- (void)shouldLaunchPlugin:(id)a0 completion:(id /* block */)a1;
- (unsigned long long)pluginManagerMediaType;
- (id)imageDataSource;

@end
