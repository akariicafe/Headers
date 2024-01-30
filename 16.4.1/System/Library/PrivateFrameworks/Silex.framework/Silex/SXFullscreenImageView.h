@class NSString, UIActivityIndicatorView, UIScrollView, SXImageView, UITapGestureRecognizer;
@protocol SXFullscreenImageViewDelegate;

@interface SXFullscreenImageView : UIView <UIGestureRecognizerDelegate, UIScrollViewDelegate>

@property (retain, nonatomic) SXImageView *contentView;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UITapGestureRecognizer *doubleTapGestureRecognizer;
@property (nonatomic) BOOL isZooming;
@property (nonatomic) unsigned long long activeGestureCount;
@property (nonatomic) struct CGPoint { double x; double y; } currentTranslation;
@property (nonatomic) double currentScale;
@property (retain, nonatomic) UIActivityIndicatorView *activityIndicator;
@property (weak, nonatomic) id<SXFullscreenImageViewDelegate> delegate;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contentViewFrame;
@property (readonly, nonatomic) unsigned long long viewIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setup;
- (id)viewForZoomingInScrollView:(id)a0;
- (void)layoutSubviews;
- (void)handleDoubleTap:(id)a0;
- (void).cxx_destruct;
- (void)scrollViewDidZoom:(id)a0;
- (void)setupGestures;
- (BOOL)allowsDismissal;
- (id)initWithContentView:(id)a0 viewIndex:(unsigned long long)a1;
- (void)showLoadingIndicator:(BOOL)a0;

@end
