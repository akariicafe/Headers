@class NSString;
@protocol SBFSpringLoadedInteractionBehaviorDelegate;

@interface SBFSpringLoadedInteractionBehavior : NSObject <UISpringLoadedInteractionBehavior>

@property (weak, nonatomic) id<SBFSpringLoadedInteractionBehaviorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldAllowInteraction:(id)a0 withContext:(id)a1;
- (void)interactionDidFinish:(id)a0;
- (void).cxx_destruct;

@end
