@class NSMutableArray;
@protocol TIKeyboardInputManager, _UIIVCResponseDelegateImpl;

@interface TUIKeyboardInputManagerMux : NSObject

@property (retain, nonatomic) id<TIKeyboardInputManager> systemInputManager;
@property (retain, nonatomic) NSMutableArray *clients;
@property (readonly, nonatomic) BOOL hasSystemInputManager;
@property (retain, nonatomic) id<_UIIVCResponseDelegateImpl> responseDelegate;

+ (id)sharedInstance;
+ (BOOL)instancesRespondToSelector:(SEL)a0;

- (void)removeAllClients;
- (BOOL)_systemHasKbd;
- (void)removeClient:(id)a0;
- (BOOL)isKindOfClass:(Class)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)a0;
- (void)setSystemInputManagerFromTextInputTraits:(id)a0 autofillMode:(unsigned long long)a1 implProxy:(id)a2;
- (void)addClient:(id)a0;
- (BOOL)conformsToProtocol:(id)a0;
- (void)updateClientResponseDelegatesWithDelegate:(id)a0;
- (void)releaseConnectedClients;
- (BOOL)respondsToSelector:(SEL)a0;

@end
