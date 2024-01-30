@class NSString;

@interface HealthArticlesUI.VideoView : UIView {
    void /* unknown type, empty encoding */ videoPlayer;
    void /* unknown type, empty encoding */ playWhenVisible;
    void /* unknown type, empty encoding */ primaryPlayerAsset;
    void /* unknown type, empty encoding */ primaryPlayerItem;
    void /* unknown type, empty encoding */ playerLooper;
    void /* unknown type, empty encoding */ accessibilityVideoDescription;
    void /* unknown type, empty encoding */ $__lazy_storage_$_captionLabel;
}

@property (nonatomic, copy) NSString *accessibilityVideoDescription;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)nonLoopingEndOfPlay:(id)a0;

@end
