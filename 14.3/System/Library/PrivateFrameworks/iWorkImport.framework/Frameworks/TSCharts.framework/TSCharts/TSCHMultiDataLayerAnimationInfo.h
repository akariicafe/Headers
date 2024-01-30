@class NSArray, NSMutableArray, CAMediaTimingFunction;

@interface TSCHMultiDataLayerAnimationInfo : NSObject <NSCopying>

@property (nonatomic) BOOL shouldAnimate;
@property (nonatomic) BOOL aboveIntercept;
@property (nonatomic) BOOL crossesIntercept;
@property (copy, nonatomic) NSArray *keyTimes;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } interceptRect;
@property (nonatomic) BOOL horizontalChart;
@property (nonatomic) double duration;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } chartBodyFrameInRepElementSpace;
@property (readonly, nonatomic) NSMutableArray *layerAnimationValues;
@property (retain, nonatomic) CAMediaTimingFunction *timingFunction;
@property (nonatomic) BOOL elementUndefined;
@property (nonatomic) BOOL atIntercept;
@property (nonatomic) BOOL currentAtIntercept;
@property (nonatomic) BOOL currentAboveIntercept;

+ (id)animationInfo;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addAnimationForLayer:(id)a0 key:(id)a1 values:(id)a2 keyTimes:(id)a3;
- (void)addAnimationForLayer:(id)a0 key:(id)a1 values:(id)a2 keyTimes:(id)a3 needPresentationLayerValues:(BOOL)a4;
- (void)addImageContentsAnimationForLayer:(id)a0 fromImage:(id)a1 toImage:(id)a2 keyTimes:(id)a3;

@end
