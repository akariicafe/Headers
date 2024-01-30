@interface _UIPopoverHostManagerPopoverUpdateConfiguration : NSObject

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } sourceRectInParentUIWindow;
@property (nonatomic) struct CGSize { double width; double height; } contentSize;
@property (nonatomic) long long preferredHorizontalAlignment;
@property (nonatomic) BOOL showsArrow;
@property (nonatomic) BOOL isRTL;

@end
