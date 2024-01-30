@class SKUIButtonViewElement, SKUIImageViewElement, SKUILabelViewElement;

@interface SKUIContentUnavailableTemplateElement : SKUIViewElement

@property (readonly, nonatomic) SKUIButtonViewElement *button;
@property (readonly, nonatomic) SKUIImageViewElement *image;
@property (readonly, nonatomic) SKUILabelViewElement *messageLabel;
@property (readonly, nonatomic) SKUILabelViewElement *titleLabel;

- (long long)pageComponentType;

@end
