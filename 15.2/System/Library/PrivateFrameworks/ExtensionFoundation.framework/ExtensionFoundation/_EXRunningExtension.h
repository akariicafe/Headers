@class NSString;
@protocol _EXConnectionHandler;

@interface _EXRunningExtension : _EXExtension <NSXPCListenerDelegate>

@property (retain) id<_EXConnectionHandler> principalObject;
@property (readonly) BOOL hasSwiftEntryPoint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (void /* function */ *)entryPointFunction;

- (void)checkIn;
- (int)_startWithArguments:(const char **)a0 count:(int)a1;
- (int)startWithArguments:(const char **)a0 count:(int)a1;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)resume;
- (void)installRunloopObserverToPingLaunchdAfterEvent;

@end
