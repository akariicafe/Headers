@class AVButton, AVMobileChromelessControlsStyleSheet;
@protocol AVMobileChromelessDisplayModeControlsViewDelegate;

@interface AVMobileChromelessDisplayModeControlsView : AVView

@property (readonly, nonatomic) AVButton *fullScreenButton;
@property (readonly, nonatomic) AVButton *pictureInPictureButton;
@property (retain, nonatomic) AVMobileChromelessControlsStyleSheet *styleSheet;
@property (nonatomic) unsigned long long fullscreenIcon;
@property (nonatomic) BOOL includesPictureInPictureControl;
@property (nonatomic) BOOL includesFullscreenControl;
@property (weak, nonatomic) id<AVMobileChromelessDisplayModeControlsViewDelegate> delegate;

- (void)pictureInPictureControlWasPressed;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithStyleSheet:(id)a0;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (void)_updateFullscreenControlIcon;
- (void)fullScreenButtonWasPressed;
- (void)_addDisplayModeControlViews:(id)a0;

@end
