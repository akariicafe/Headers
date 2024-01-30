@class UIWindow;
@protocol CPInstrumentClusterControllerDelegate;

@interface CPInstrumentClusterController : NSObject

@property (weak, nonatomic) id<CPInstrumentClusterControllerDelegate> delegate;
@property (readonly, nonatomic) UIWindow *instrumentClusterWindow;
@property (readonly, nonatomic) unsigned long long speedLimitSetting;
@property (readonly, nonatomic) unsigned long long compassSetting;

+ (id)_clusterProvidingInterface;

- (void)_invalidate;
- (void).cxx_destruct;
- (id)_init;
- (void)setCompassSetting:(unsigned long long)a0;
- (void)setSpeedLimitSetting:(unsigned long long)a0;
- (void)setInstrumentClusterWindow:(id)a0;

@end
