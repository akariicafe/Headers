@class ACCFeaturePluginHIDProvider, NSString;

@interface ACCFeaturePluginHID : NSObject <ACCFeaturePluginProtocol>

@property (nonatomic) BOOL isRunning;
@property (retain, nonatomic) ACCFeaturePluginHIDProvider *hidProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *pluginName;

- (void)stopPlugin;
- (void)initPlugin;
- (void)startPlugin;
- (void).cxx_destruct;

@end
