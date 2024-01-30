@class UILabel, NSString, UIVisualEffectView, UIView, _SFBarTheme, UIButton;

@interface _SFCrashBanner : UIView {
    UIVisualEffectView *_backdrop;
    UIVisualEffectView *_contentEffectView;
    UIView *_separator;
    UILabel *_label;
    struct CGSize { double width; double height; } _cachedLabelLayoutSize;
}

@property (retain, nonatomic) _SFBarTheme *theme;
@property (retain, nonatomic) UIButton *closeButton;
@property (copy, nonatomic) NSString *backdropGroupName;
@property (nonatomic) unsigned long long type;
@property (readonly, nonatomic) NSString *bannerText;
@property (readonly, nonatomic) NSString *manuallyWrappedBannerText;

- (void).cxx_destruct;
- (BOOL)_shouldUseManuallyWrappedCrashMessageForWidth:(double)a0;
- (struct CGSize { double x0; double x1; })_labelLayoutSizeForWidth:(double)a0;
- (void)setBannerText:(id)a0 manuallyWrappedBannerText:(id)a1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
