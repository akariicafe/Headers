@interface PUVideoEditPluginSession : PUEditPluginSession

@property (nonatomic) BOOL allowLoopingVideoExtensions;

- (id)videoDataSource;
- (unsigned long long)pluginManagerMediaType;
- (void)loadItemProviderWithSupportedAdjustmentData:(id)a0 loadHandler:(id /* block */)a1;

@end
