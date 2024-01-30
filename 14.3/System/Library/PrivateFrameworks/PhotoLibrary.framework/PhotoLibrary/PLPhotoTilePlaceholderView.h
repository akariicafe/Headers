@class NSString, UIActivityIndicatorView, UILabel, UIView;

@interface PLPhotoTilePlaceholderView : UIView <PLTilePlaceholderView> {
    UIActivityIndicatorView *_loadingIndicatorView;
    UILabel *_loadingLabel;
    UIView *_loadingContainerView;
    double _lastViewPhaseChangeDate;
    BOOL _indicatorIsVisible;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)layoutSubviews;
- (void)showLoadingIndicator;
- (void)setImageRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)fadeOutSoonIfNeededAndRemoveFromSuperview:(BOOL)a0;
- (void)showLoadingIndicatorWhenReady;
- (void)showErrorIndicator;
- (void)updateCloudDownloadProgress:(double)a0;
- (void)setToolbarVisible:(BOOL)a0;

@end
