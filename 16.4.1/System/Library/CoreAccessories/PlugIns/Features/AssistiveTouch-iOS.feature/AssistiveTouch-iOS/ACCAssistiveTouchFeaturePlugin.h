@class ACCAssistiveTouchProvider, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface ACCAssistiveTouchFeaturePlugin : NSObject <ACCAssistiveTouchProviderProtocol, ACCFeaturePluginProtocol>

@property (nonatomic) BOOL isRunning;
@property (retain) ACCAssistiveTouchProvider *assistiveTouchProvider;
@property (retain) NSObject<OS_dispatch_queue> *assistiveTouchQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *pluginName;

- (void)initPlugin;
- (void)startPlugin;
- (void)_assistiveTouchToggled:(id)a0;
- (void)_startAssistiveTouch:(id)a0;
- (void)_stopAssistiveTouch:(id)a0;
- (void)stopPlugin;
- (void).cxx_destruct;
- (void)assistiveTouch:(id)a0 setEnabled:(BOOL)a1;

@end
