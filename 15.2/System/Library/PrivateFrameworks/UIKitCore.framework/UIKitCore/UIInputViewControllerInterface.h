@class NSString, _UIInputViewControllerState;
@protocol _UIIVCInterface, _UIIVCResponseDelegate;

@interface UIInputViewControllerInterface : TIKeyboardInputManagerStub <_UIIVCInterface>

@property (retain, nonatomic, getter=_cachedState, setter=_setCachedState:) _UIInputViewControllerState *cachedState;
@property (retain, nonatomic) id<_UIIVCInterface> forwardingInterface;
@property (retain, nonatomic) id<_UIIVCResponseDelegate> responseDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)syncToKeyboardState:(id)a0 completionHandler:(id /* block */)a1;
- (id)init;
- (void)_tearDownRemoteService;
- (void)_handleInputViewControllerState:(id)a0;
- (void)dealloc;

@end
