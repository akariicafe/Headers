@class UIColor;

@interface WBSSiteIconKeyColorExtractorCache : NSObject

@property (retain, nonatomic) UIColor *color;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } insets;
@property (nonatomic) double confidence;
@property (nonatomic) double nonTransparentConfidence;

- (void).cxx_destruct;

@end
