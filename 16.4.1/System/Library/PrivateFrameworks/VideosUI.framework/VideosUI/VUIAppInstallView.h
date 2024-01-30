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
+ (double)_appIconRadius;
+ (id)_progressMaskImage;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)progressViewCanBeRemoved:(id)a0;
- (void)dealloc;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)finishInstallationWithCompletion:(id /* block */)a0;
- (void)setWaiting;

@end
