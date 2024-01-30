@class AVTUIEnvironment, NSString;
@protocol AVTViewLayoutInfo;

@interface AVTAttributeEditorToActionsTransitionAnimator : NSObject <UIViewControllerAnimatedTransitioning>

@property (readonly, nonatomic) AVTUIEnvironment *environment;
@property (readonly, nonatomic) id<AVTViewLayoutInfo> avtViewLayoutInfo;
@property (readonly, nonatomic) BOOL RTL;
@property (readonly, nonatomic) double userInfoViewHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })adjustedSafeAreaInsetsForView:(id)a0;

@end
