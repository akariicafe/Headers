@class NSString, UIImageView, UIActivityIndicatorView, UILabel, UIVisualEffectView, UITapGestureRecognizer;
@protocol MKAddPhotoBadgeViewDelegate;

@interface MKAddPhotoBadgeView : UIView <MKActivityObserving> {
    UILabel *_label;
    UIImageView *_imageView;
    struct CGSize { double width; double height; } _size;
    UITapGestureRecognizer *_gestureRecognizer;
    UIActivityIndicatorView *_spinner;
    UIVisualEffectView *_backgroundView;
}

@property (readonly, nonatomic) double margin;
@property (readonly, nonatomic) double fullHeight;
@property (weak, nonatomic) id<MKAddPhotoBadgeViewDelegate> delegate;
@property (readonly, nonatomic) double compressedWidth;
@property (readonly, nonatomic) double fullWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_setupGestureRecognizer;
- (void)_badgeViewTapped;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setupSubviews;
- (void)beginAnimatingActivityIndicator;
- (void)endAnimatingActivityIndicatorWithError:(id)a0;

@end
