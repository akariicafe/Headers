@class NSArray, NSString, UIViewController;
@protocol SAUIElementViewControlling;

@interface _SBSystemApertureIndicatorContainerView : UIView <SAUILayoutObstructed, SBSystemApertureElementViewControllingContaining>

@property (readonly, copy, nonatomic) NSArray *layoutObstacles;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) UIViewController<SAUIElementViewControlling> *elementViewController;
@property (readonly, weak, nonatomic) UIViewController<SAUIElementViewControlling> *outgoingElementViewController;

- (void).cxx_destruct;

@end
