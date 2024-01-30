@class SFCustomActivityProxy;

@interface SFHostApplicationCustomActivity : _SFActivity

@property (readonly, nonatomic) SFCustomActivityProxy *activityProxy;

- (id)activityType;
- (void).cxx_destruct;
- (id)activityImage;
- (id)activityTitle;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (id)initWithActivityProxy:(id)a0;

@end
