@class AVButton, AVMobileChromelessControlsStyleSheet;
@protocol AVMobileChromelessDisplayModeControlsViewDelegate;

@interface AVMobileChromelessDisplayModeControlsView : AVView {
    AVButton *_fullScreenButton;
    AVButton *_pictureInPictureButton;
}

@property (retain, nonatomic) AVMobileChromelessControlsStyleSheet *styleSheet;
@property (nonatomic) unsigned long long fullscreenIcon;
@property (nonatomic) BOOL includesPictureInPictureControl;
@property (nonatomic) BOOL includesFullscreenControl;
@property (weak, nonatomic) id<AVMobileChromelessDisplayModeControlsViewDelegate> delegate;

- (id)initWithStyleSheet:(id)a0;
- (void)_addDisplayModeControlViews:(id)a0;
- (void)fullScreenButtonWasPressed;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)pictureInPictureControlWasPressed;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)_updateFullscreenControlIcon;

@end
