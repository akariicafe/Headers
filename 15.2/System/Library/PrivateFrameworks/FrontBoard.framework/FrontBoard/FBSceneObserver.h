@class NSString;
@protocol FBSceneObserver, FBSceneDelegate;

@interface FBSceneObserver : NSObject <BSDescriptionProviding, FBSceneObserver, FBSceneDelegate> {
    unsigned long long _observerAddress;
    Class _observerClass;
    BOOL _isDelegate;
    struct { BOOL contentStateDidChange; BOOL updatePrepared; BOOL updateApplied; BOOL updateCompleted; BOOL clientSettingsUpdated; BOOL didActivate; BOOL willDeactivateWithError; BOOL didInvalidate; BOOL clientDidConnect; } _observerFlags;
    struct { BOOL didReceiveActions; BOOL didDeactivateWithError; } _delegateFlags;
}

@property (readonly, weak, nonatomic) id<FBSceneObserver> observer;
@property (readonly, weak, nonatomic) id<FBSceneDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sceneDidDeactivate:(id)a0 withError:(id)a1;
- (void)sceneContentStateDidChange:(id)a0;
- (id)initWithObserver:(id)a0;
- (void)sceneDidActivate:(id)a0;
- (void)sceneWillDeactivate:(id)a0 withError:(id)a1;
- (BOOL)isDelegate;
- (id)initWithDelegate:(id)a0;
- (void)scene:(id)a0 clientDidConnect:(id)a1;
- (void)sceneDidInvalidate:(id)a0;
- (id)_initWithObserver:(id)a0;
- (void)scene:(id)a0 didPrepareUpdateWithContext:(id)a1;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)scene:(id)a0 didUpdateClientSettingsWithDiff:(id)a1 oldClientSettings:(id)a2 transitionContext:(id)a3;
- (BOOL)delegateHandlesActions;
- (void)scene:(id)a0 didCompleteUpdateWithContext:(id)a1 error:(id)a2;
- (id)succinctDescription;
- (void)scene:(id)a0 didReceiveActions:(id)a1;
- (void)scene:(id)a0 didApplyUpdateWithContext:(id)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;

@end
