@class NSString, UIImageView, UIImage, UIView, VUISBIconProgressView;

@interface VUIAppInstallView : UIView <VUISBIconProgressViewDelegate> {
    UIImageView *_appIconImageView;
    UIView *_backgroundKnockoutView;
    id /* block */ _completion;
    VUISBIconProgressView *_progressView;
}

@property (retain, nonatomic) UIImage *appIcon;
@property (nonatomic) double installProgress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })_appIconSize;
+ (id)_progressMaskImage;
+ (double)_appIconRadius;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)progressViewCanBeRemoved:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setWaiting;
- (void)finishInstallationWithCompletion:(id /* block */)a0;

@end
