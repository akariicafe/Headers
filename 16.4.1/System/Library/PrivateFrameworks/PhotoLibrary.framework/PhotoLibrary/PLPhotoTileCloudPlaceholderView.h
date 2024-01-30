@class NSString, PLRoundProgressView, UIView, UIButton;
@protocol PLPhotoTileCloudPlaceholderViewDelegate;

@interface PLPhotoTileCloudPlaceholderView : UIView <PLTilePlaceholderView> {
    PLRoundProgressView *_loadingIndicatorView;
    UIView *_loadingContainerView;
    UIButton *_loadingErrorButton;
    BOOL _indicatorIsVisible;
    BOOL _showingError;
    BOOL _showingLoading;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _imageRect;
    BOOL _toolbarVisible;
    double _lastViewPhaseChangeDate;
    id<PLPhotoTileCloudPlaceholderViewDelegate> _delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)layoutSubviews;
- (void)setImageRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)showLoadingIndicator;
- (void)_retryDownload;
- (void)fadeOutSoonIfNeededAndRemoveFromSuperview:(BOOL)a0;
- (void)setRetryDelegate:(id)a0;
- (void)setToolbarVisible:(BOOL)a0;
- (void)showErrorIndicator;
- (void)showLoadingIndicatorWhenReady;
- (void)updateCloudDownloadProgress:(double)a0;

@end
