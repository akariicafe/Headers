@class NSString;

@interface SBTransientOverlayBlockTransitionCoordinator : NSObject <SBTransientOverlayTransitionCoordinating>

@property (copy, nonatomic) id /* block */ startTransitionHandler;
@property (copy, nonatomic) id /* block */ finalizeTransitionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)finalizeTransitionWithContextProvider:(id)a0;
- (void)startTransitionWithContextProvider:(id)a0;

@end
