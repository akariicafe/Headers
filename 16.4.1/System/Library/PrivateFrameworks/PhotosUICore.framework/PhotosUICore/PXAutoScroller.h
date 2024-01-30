@class NSObject;
@protocol PXAnonymousScrollView, PXAutoScrollerDelegate;

@interface PXAutoScroller : NSObject {
    struct { BOOL didAutoscrollWithTimestamp; } _delegateRespondsTo;
}

@property (readonly, nonatomic) double _margin;
@property (readonly, nonatomic) double _maximumSpeed;
@property (nonatomic, setter=_setAutoscrollDirection:) struct CGPoint { double x; double y; } _autoscrollDirection;
@property (nonatomic, getter=_isRepeating, setter=_setRepeating:) BOOL _repeating;
@property (nonatomic, setter=_setLastUpdateTimestamp:) double _lastUpdateTimestamp;
@property (readonly, nonatomic) NSObject<PXAnonymousScrollView> *scrollView;
@property (weak, nonatomic) id<PXAutoScrollerDelegate> delegate;

- (BOOL)autoscrollWithOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)startRepeating;
- (void)stopRepeating;
- (void)stop;
- (id)init;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })visibleRectForScrollView:(id)a0;
- (void).cxx_destruct;
- (id)initWithTargetScrollView:(id)a0;
- (void)updateWithTimestamp:(double)a0;
- (void)updateWithUserInteractionLocation:(struct CGPoint { double x0; double x1; })a0 inCoordinateSpace:(id)a1;

@end
