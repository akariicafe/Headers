@class AXMVisionFeature, NSMutableArray;

@interface AXMMLElementGroup : NSObject

@property (retain, nonatomic) AXMVisionFeature *feature;
@property (retain, nonatomic) NSMutableArray *subfeatures;
@property (nonatomic) BOOL topLevel;
@property (nonatomic) BOOL includeChildren;
@property (nonatomic) double confidence;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;

- (id)description;
- (id)textLabel;
- (void).cxx_destruct;
- (id)init;
- (id)featureLabel;
- (id)childFeatures;

@end
