@interface TSKeyCommandManager : NSObject {
    void /* unknown type, empty encoding */ keyCommandManager;
    void /* unknown type, empty encoding */ keyCommandProvider;
}

@property (nonatomic) void /* unknown type, empty encoding */ hasBeenTraversed;

- (id)keyCommands;
- (id)init;
- (void).cxx_destruct;
- (void)registerController:(id)a0 withSelector:(SEL)a1;
- (void)handleKeyPressWithKey:(id)a0 flags:(long long)a1;
- (void)handleKeyPressWithCommand:(id)a0;
- (void)registerProviderWithScrollView:(id)a0;
- (void)invalidate;
- (void)registerKeys:(id)a0;

@end
