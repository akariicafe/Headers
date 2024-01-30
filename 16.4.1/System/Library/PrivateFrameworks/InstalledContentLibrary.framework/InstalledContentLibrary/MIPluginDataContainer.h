@class NSString;

@interface MIPluginDataContainer : MIDataContainer

@property (copy, nonatomic) NSString *parentBundleID;

+ (id)pluginDataContainerWithIdentifier:(id)a0 createIfNeeded:(BOOL)a1 created:(BOOL *)a2 error:(id *)a3;

- (void).cxx_destruct;

@end
