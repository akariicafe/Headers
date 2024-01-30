@class NSMutableArray, NSString, RBSTarget, BSServiceConnectionEndpointInjector;

@interface _UIVisibilityPropagationView : UIView {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _visibilityLock;
    RBSTarget *_visibilityLock_target;
    BOOL _visibilityLock_enabled;
    NSString *_visibilityLock_sourceEnvironment;
    BOOL _visibilityLock_updateEnqueued;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _visibilityProcessingLock;
    RBSTarget *_visibilityProcessingLock_target;
    NSString *_visibilityProcessingLock_sourceEnvironment;
    BSServiceConnectionEndpointInjector *_visibilityProcessingLock_endpointInjector;
    NSMutableArray *_windowChangeNotifications;
}

@property (nonatomic, getter=isVisibilityPropagationEnabled) BOOL visibilityPropagationEnabled;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateVisibility;
- (void)setVisibilityTarget:(id)a0;
- (void)setHidden:(BOOL)a0;
- (void).cxx_destruct;
- (void)_visibilityLock_setSource:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_visibilityLock_enqueueUpdateIfNecessary_body;
- (void)_visibilityLock_enqueueUpdateIfNecessary;
- (void)dealloc;
- (void)didMoveToWindow;
- (void)_visibilityLock_updateVisibility;

@end
