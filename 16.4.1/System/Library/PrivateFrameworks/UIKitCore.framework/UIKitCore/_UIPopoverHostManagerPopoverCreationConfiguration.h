@class UIViewController, UIView;

@interface _UIPopoverHostManagerPopoverCreationConfiguration : NSObject

@property (retain, nonatomic) UIViewController *contentViewController;
@property (retain, nonatomic) UIView *sourceView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } sourceRectInParentUIWindow;
@property (nonatomic) struct CGSize { double width; double height; } contentSize;
@property (nonatomic) unsigned long long permittedArrowDirections;
@property (nonatomic) BOOL showsArrow;
@property (nonatomic) long long userInterfaceStyle;
@property (copy, nonatomic) id /* block */ completionBlock;

- (void).cxx_destruct;

@end
