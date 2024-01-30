@class NSString;

@interface SBFluidDismissalState : NSObject <SiriUIFluidDismissalState>

@property (nonatomic) double backgroundWeighting;
@property (nonatomic) double contentWeighting;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } contentRect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double backgroundWeighting;
@property (nonatomic) double contentWeighting;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contentRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } homeGrabberContentRect;
@property (nonatomic) long long dismissalType;
@property (nonatomic) long long transitionPhase;


@end
