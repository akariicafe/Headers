@interface CCTextLayerLineData : NSObject

@property (retain, nonatomic) id line;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bounds;
@property (nonatomic) double baselineOffset;
@property (nonatomic) double xOffset;

- (void).cxx_destruct;

@end
