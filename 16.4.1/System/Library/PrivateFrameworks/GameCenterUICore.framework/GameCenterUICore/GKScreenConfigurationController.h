@class GKEventEmitter;

@interface GKScreenConfigurationController : NSObject

@property (retain, nonatomic) GKEventEmitter *emitter;
@property (readonly) double greatestScreenScale;

+ (id)sharedController;
+ (double)_scaleForCurrentDisplayConfiguration;

- (void)registerListener:(id)a0;
- (void)unregisterListener:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_screensDidChange:(id)a0;

@end
