@class NSString;

@interface WKAccessibilityImageRegion : NSObject

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (copy, nonatomic) NSString *label;

- (void).cxx_destruct;

@end
