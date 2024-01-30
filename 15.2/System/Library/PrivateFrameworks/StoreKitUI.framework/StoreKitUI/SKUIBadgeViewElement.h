@class NSString, UIImage, NSURL, NSAttributedString;

@interface SKUIBadgeViewElement : SKUIViewElement {
    BOOL _hasValidFallbackImage;
    NSString *_text;
}

@property (readonly, nonatomic) NSAttributedString *attributedString;
@property (readonly, nonatomic) long long badgeType;
@property (readonly, nonatomic) UIImage *fallbackImage;
@property (readonly, nonatomic) NSString *resourceName;
@property (readonly, nonatomic) struct CGSize { double width; double height; } size;
@property (readonly, nonatomic) NSURL *URL;

- (id)accessibilityText;
- (void).cxx_destruct;
- (id)initWithDOMElement:(id)a0 parent:(id)a1 elementFactory:(id)a2;
- (id)applyUpdatesWithElement:(id)a0;

@end
