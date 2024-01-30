@class NSArray, NSNumber;

@interface TSCHRadialBodyLayoutItemPathCache : NSObject

@property (readonly, nonatomic) unsigned long long seriesIndex;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rootedLayoutRect;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } wedgeCenterPoint;
@property (readonly, nonatomic) struct CGPath { } *pathLayoutRelative;
@property (readonly, nonatomic) struct CGPath { } *pathTransformRelative;
@property (readonly, copy, nonatomic) NSArray *pathSelectionKnobs;
@property (readonly, copy, nonatomic) NSNumber *innerRadius;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithSeriesIndex:(unsigned long long)a0 rootedLayoutRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 wedgeCenterPoint:(struct CGPoint { double x0; double x1; })a2 pathLayoutRelative:(struct CGPath { } *)a3 pathTransformRelative:(struct CGPath { } *)a4 pathSelectionKnobs:(id)a5 innerRadius:(id)a6;

@end
