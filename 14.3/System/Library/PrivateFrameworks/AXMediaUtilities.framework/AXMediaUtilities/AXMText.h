@class NSString;

@interface AXMText : NSObject

@property (retain, nonatomic) NSString *text;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } boundingBox;
@property (nonatomic) double confidence;

- (void).cxx_destruct;

@end
