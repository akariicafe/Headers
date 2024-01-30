@class UIView;

@interface VKCQuickActionLayoutInfo : NSObject

@property (retain, nonatomic) UIView *view;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (nonatomic) BOOL hidden;

- (void).cxx_destruct;

@end
