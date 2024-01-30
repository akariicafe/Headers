@class NSString;
@protocol UICoordinateSpace;

@interface _UIPreviewInteractionSimulatingTouchForceProvider : NSObject <_UIPreviewInteractionTouchForceProviding> {
    double _targetTouchForce;
    struct CGPoint { double x; double y; } _location;
    id<UICoordinateSpace> _coordinateSpace;
}

@property (nonatomic, getter=isActive) BOOL active;
@property (readonly, nonatomic) double touchForce;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
