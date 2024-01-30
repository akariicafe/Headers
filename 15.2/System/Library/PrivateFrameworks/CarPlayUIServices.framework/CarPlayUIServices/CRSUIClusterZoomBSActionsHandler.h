@class NSString;
@protocol CRSUIClusterZoomActionDelegate;

@interface CRSUIClusterZoomBSActionsHandler : NSObject <_UISceneBSActionHandler>

@property (weak, nonatomic) id<CRSUIClusterZoomActionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (id)_respondToActions:(id)a0 forFBSScene:(id)a1 inUIScene:(id)a2 fromTransitionContext:(id)a3;

@end
