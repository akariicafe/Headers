@class _UIKeyShortcutHUDConfiguration;

@interface _UIORequestKeyShortcutHUDPresentationAction : _UIOAction

@property (readonly, nonatomic) _UIKeyShortcutHUDConfiguration *configuration;

- (BOOL)isPermitted;
- (id)initWithConfiguration:(id)a0 responseHandler:(id /* block */)a1;
- (void)performActionFromConnection:(id)a0;

@end
