@class AXMVisionFeature, NSMutableArray;

@interface AXMLElementGroup : NSObject

@property (retain, nonatomic) AXMVisionFeature *feature;
@property (retain, nonatomic) NSMutableArray *subfeatures;
@property (nonatomic) BOOL topLevel;
@property (nonatomic) BOOL includeChildren;
@property (nonatomic) double confidence;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;

- (id)init;
- (id)textLabel;
- (void).cxx_destruct;
- (id)childFeatures;

@end
