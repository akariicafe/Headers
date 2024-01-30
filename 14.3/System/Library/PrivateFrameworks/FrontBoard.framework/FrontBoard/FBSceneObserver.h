@class NSString;
@protocol FBSceneObserver, FBSceneDelegate;

@interface FBSceneObserver : NSObject <BSDescriptionProviding, FBSceneObserver, FBSceneDelegate> {
    unsigned long long _observerAddress;
    Class _observerClass;
    BOOL _isDelegate;
    struct { BOOL contentStateDidChange; BOOL updatePrepared; BOOL updateApplied; BOOL updateCompleted; BOOL clientSettingsUpdated; BOOL didInvalidate; } _observerFlags;
    struct { BOOL clientSettingsUpdated; BOOL didReceiveActions; } _delegateFlags;
}

@property (readonly, weak, nonatomic) id<FBSceneObserver> observer;
@property (readonly, weak, nonatomic) id<FBSceneDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isDelegate;
- (void)scene:(id)a0 didUpdateClientSettingsWithDiff:(id)a1 oldClientSettings:(id)a2 transitionContext:(id)a3;
- (void)scene:(id)a0 didCompleteUpdateWithContext:(id)a1 error:(id)a2;
- (void)scene:(id)a0 didPrepareUpdateWithContext:(id)a1;
- (void)scene:(id)a0 didApplyUpdateWithContext:(id)a1;
- (void).cxx_destruct;
- (void)scene:(id)a0 didReceiveActions:(id)a1;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)initWithObserver:(id)a0;
- (void)sceneDidInvalidate:(id)a0;
- (void)sceneContentStateDidChange:(id)a0;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)_initWithObserver:(id)a0;
- (id)succinctDescriptionBuilder;
- (BOOL)isEqual:(id)a0;
- (id)initWithDelegate:(id)a0;

@end
