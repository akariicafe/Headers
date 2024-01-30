@class NSMutableArray;
@protocol TIKeyboardInputManager, _UIIVCResponseDelegateImpl;

@interface TUIKeyboardInputManagerMux : NSObject

@property (retain, nonatomic) id<TIKeyboardInputManager> systemInputManager;
@property (retain, nonatomic) NSMutableArray *clients;
@property (readonly, nonatomic) BOOL hasSystemInputManager;
@property (retain, nonatomic) id<_UIIVCResponseDelegateImpl> responseDelegate;

+ (id)sharedInstance;
+ (BOOL)instancesRespondToSelector:(SEL)a0;

- (void)addClient:(id)a0;
- (void)removeClient:(id)a0;
- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)isKindOfClass:(Class)a0;
- (void).cxx_destruct;
- (void)removeAllClients;
- (void)releaseConnectedClients;
- (void)setSystemInputManagerFromTextInputTraits:(id)a0 autofillMode:(unsigned long long)a1 implProxy:(id)a2;
- (BOOL)respondsToSelector:(SEL)a0;
- (BOOL)_systemHasKbd;
- (BOOL)conformsToProtocol:(id)a0;
- (void)updateClientResponseDelegatesWithDelegate:(id)a0;

@end
