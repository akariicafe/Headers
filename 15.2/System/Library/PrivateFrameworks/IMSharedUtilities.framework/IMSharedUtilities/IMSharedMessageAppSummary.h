@interface IMSharedMessageAppSummary : NSObject

@property (class, copy) Class dataSourceClass;

+ (id)pluginPath;
+ (id)previewSummary;
+ (id)previewSummaryWithPluginPayload:(id)a0;
+ (void)_initBundleClassAtPath:(id)a0;
+ (void)initializePlugin;
+ (id)linkMetadataForPluginPayload:(id)a0;

@end
