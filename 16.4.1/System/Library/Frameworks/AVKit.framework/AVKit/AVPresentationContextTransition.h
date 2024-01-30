@interface AVPresentationContextTransition : NSObject

@property (nonatomic) BOOL wasInitiallyInteractive;
@property (nonatomic) BOOL hasAVKitAnimator;
@property (nonatomic) BOOL wasCancelledWithInactiveScene;
@property (nonatomic) unsigned long long presenterSupportedOrientations;
@property (nonatomic) long long initialInterfaceOrientation;
@property (nonatomic) long long finalInterfaceOrientation;
@property (readonly, nonatomic) BOOL isRotated;
@property (readonly, nonatomic) long long interfaceRotation;
@property (readonly, nonatomic) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } rotationTransform;
@property (readonly, nonatomic) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } counterRotationTransform;

- (BOOL)presenterSupportsOrientation:(long long)a0;

@end
