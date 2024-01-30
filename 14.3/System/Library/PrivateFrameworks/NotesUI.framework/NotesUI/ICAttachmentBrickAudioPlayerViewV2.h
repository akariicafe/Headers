@class ICArcLayer, ICCircleLayer;
@protocol ICAttachmentBrickAudioPlayerViewV2Delegate;

@interface ICAttachmentBrickAudioPlayerViewV2 : ICAudioPlayPauseView

@property (retain, nonatomic) ICCircleLayer *progressGrooveLayer;
@property (retain, nonatomic) ICArcLayer *progressCircleLayer;
@property (nonatomic) id<ICAttachmentBrickAudioPlayerViewV2Delegate> delegate;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)tintColor;
- (void)didMoveToWindow;
- (void)updateTime:(double)a0 duration:(double)a1;
- (void)sharedInit;
- (void)createBackgroundLayer;
- (void)createPlayPauseViews;
- (void)showStopped;
- (id)addSubImageViewForImage:(id)a0;
- (void)showPressed:(BOOL)a0;
- (void)createProgressLayers;
- (id)backgroundNormalColor;
- (id)backgroundPressedColor;
- (void)showDisabled:(BOOL)a0;

@end
