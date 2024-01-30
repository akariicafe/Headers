@class IKViewElement, NSString, UIView;

@interface VUIBadgeViewWrapper : NSObject

@property (retain, nonatomic) UIView *badgeView;
@property (retain, nonatomic) IKViewElement *badgeElement;
@property (nonatomic) struct CGSize { double width; double height; } badgeSize;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } badgeFrame;
@property (retain, nonatomic) NSString *badgeType;

- (void).cxx_destruct;

@end
