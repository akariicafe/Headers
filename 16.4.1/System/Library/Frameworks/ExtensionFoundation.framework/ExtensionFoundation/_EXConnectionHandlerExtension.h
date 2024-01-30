@protocol _EXConnectionHandler;

@interface _EXConnectionHandlerExtension : _EXExtension

@property (retain) id principalObject;
@property (retain) id<_EXConnectionHandler> connectionHandler;

- (void)willFinishLaunching;
- (void)didFinishLaunching;
- (BOOL)loadDelegateWithClass:(Class)a0;
- (BOOL)shouldAcceptConnection:(id)a0;
- (void).cxx_destruct;

@end
