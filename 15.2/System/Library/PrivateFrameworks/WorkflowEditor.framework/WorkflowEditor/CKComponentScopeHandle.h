@class CKComponent, CKComponentController;
@protocol CKComponentStateListener;

@interface CKComponentScopeHandle : NSObject {
    id<CKComponentStateListener> _listener;
    CKComponentController *_controller;
    int _rootIdentifier;
    BOOL _acquired;
    BOOL _resolved;
    CKComponent *_acquiredComponent;
}

@property (readonly, nonatomic) CKComponentController *controller;
@property (readonly, nonatomic) Class componentClass;
@property (readonly, nonatomic) id state;
@property (readonly, nonatomic) int globalIdentifier;

+ (id)handleForComponent:(id)a0;

- (id)responder;
- (void)resolve;
- (void).cxx_destruct;
- (void)dealloc;
- (void)updateState:(id /* block */)a0 mode:(unsigned long long)a1;
- (id)initWithListener:(id)a0 rootIdentifier:(int)a1 componentClass:(Class)a2 initialStateCreator:(id /* block */)a3;
- (id)newHandleWithStateUpdates:(const void *)a0 componentScopeRoot:(id)a1;
- (id)newHandleToBeReacquiredDueToScopeCollision;
- (id)initWithListener:(id)a0 globalIdentifier:(int)a1 rootIdentifier:(int)a2 componentClass:(Class)a3 state:(id)a4 controller:(id)a5;
- (BOOL)acquireFromComponent:(id)a0;

@end
