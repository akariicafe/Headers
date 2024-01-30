@class CALayer, CAPropertyAnimation;

@interface PHCloudActivityView : UIView

@property (retain, nonatomic) CALayer *cloudImageLayer;
@property (retain, nonatomic) CALayer *completedImageLayer;
@property (retain, nonatomic) CALayer *loadingImageLayer;
@property (retain, nonatomic) CAPropertyAnimation *rotationAnimation;
@property (nonatomic) unsigned long long state;
@property (nonatomic) double initialWidth;

+ (void)initialize;

- (void)registerForNotifications;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)persistenceManagerDidChange:(id)a0;
- (void)streamingDidStart:(id)a0;
- (void)streamingDidStop:(id)a0;
- (void)updateViewVisibility;
- (void)stopRotationAnimation;
- (void)startRotationAnimation;

@end
