@class IKColor, IKBadgeElement;

@interface IKTextBadgeAttachment : NSTextAttachment

@property (readonly, weak, nonatomic) IKBadgeElement *badge;
@property (retain, nonatomic) IKColor *tintColor;

- (void).cxx_destruct;
- (id)initWithBadgeElement:(id)a0;

@end
