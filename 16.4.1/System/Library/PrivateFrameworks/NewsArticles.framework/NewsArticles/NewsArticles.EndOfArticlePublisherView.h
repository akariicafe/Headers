@class NSArray, NSString;

@interface NewsArticles.EndOfArticlePublisherView : UIView {
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ logoImageView;
    void /* unknown type, empty encoding */ logoNameLabel;
    void /* unknown type, empty encoding */ followButton;
    void /* unknown type, empty encoding */ backgroundColorView;
    void /* unknown type, empty encoding */ logoImageOnTap;
    void /* unknown type, empty encoding */ axElement;
}

@property (nonatomic) BOOL isAccessibilityElement;
@property (nonatomic, copy) NSArray *accessibilityElements;
@property (nonatomic, copy) NSString *accessibilityLabel;
@property (nonatomic, copy) NSString *accessibilityValue;
@property (nonatomic, copy) NSString *accessibilityHint;
@property (nonatomic) unsigned long long accessibilityTraits;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
