@class NSString, UIPointerInteraction, _UICursorRequest, UIView;
@protocol _UICursorInteractionDelegate;

@interface _UICursorInteraction : NSObject <UIPointerInteractionDelegate, UIInteraction> {
    struct { BOOL regionForLocation; BOOL styleForRegion; BOOL styleForRegionModifiers; BOOL willEnterRegionWithAnimator; BOOL willExitRegionWithAnimator; BOOL asyncRegionForLocation; BOOL targetRegionForDeceleratingCursorWithRequests; BOOL regionForRequest; BOOL willEnterRegion; BOOL willExitRegion; } _delegateImplements;
}

@property (retain, nonatomic) UIPointerInteraction *underlyingPointerInteraction;
@property (retain, nonatomic) _UICursorRequest *pendingRequest;
@property (nonatomic, getter=_pausesCursorUpdatesWhilePanning, setter=_setPausesCursorUpdatesWhilePanning:) BOOL pausesCursorUpdatesWhilePanning;
@property (readonly, weak, nonatomic) id<_UICursorInteractionDelegate> delegate;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) UIView *view;

- (void)_pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2 completion:(id /* block */)a3;
- (id)initWithDelegate:(id)a0;
- (void)didMoveToView:(id)a0;
- (void)willMoveToView:(id)a0;
- (void)pointerInteraction:(id)a0 willEnterRegion:(id)a1 animator:(id)a2;
- (void)pointerInteraction:(id)a0 willExitRegion:(id)a1 animator:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (void)_queryDelegateRegionForRequest:(id)a0 defaultRegion:(id)a1 completion:(id /* block */)a2 synchronously:(BOOL)a3;
- (void)invalidate;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (void)_pointerInteraction:(id)a0 targetRegionForDeceleratingPointerWithRequests:(id)a1 completion:(id /* block */)a2;
- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;

@end
