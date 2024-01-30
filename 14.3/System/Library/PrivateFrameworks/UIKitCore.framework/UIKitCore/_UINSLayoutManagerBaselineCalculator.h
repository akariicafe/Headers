@class NSString, NSLayoutManager;
@protocol UICoordinateSpace;

@interface _UINSLayoutManagerBaselineCalculator : NSObject <_UINSLayoutManagerBaselineCalculator> {
    NSLayoutManager *_layoutManager;
    id<UICoordinateSpace> _coordinateSpace;
    double _scale;
}

@property (readonly, nonatomic) double firstBaselineOffsetFromTop;
@property (readonly, nonatomic) double lastBaselineOffsetFromBottom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
