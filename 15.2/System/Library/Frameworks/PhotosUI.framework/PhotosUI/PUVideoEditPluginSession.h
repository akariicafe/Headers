@interface PUVideoEditPluginSession : PUEditPluginSession

@property (nonatomic) BOOL allowLoopingVideoExtensions;

- (void)loadItemProviderWithSupportedAdjustmentData:(id)a0 loadHandler:(id /* block */)a1;
- (unsigned long long)pluginManagerMediaType;
- (id)videoDataSource;

@end
