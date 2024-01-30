@class NSString, _EXExtension;
@protocol _EXExtensionConfigurationProviding;

@interface _EXRunningExtension : NSObject <NSXPCListenerDelegate>

@property (retain, nonatomic) _EXExtension *extension;
@property (readonly) id<_EXExtensionConfigurationProviding> configuration;
@property (readonly) struct { unsigned int val[8]; } hostAuditToken;
@property (readonly) unsigned long long signpost;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (void /* function */ *)entryPointFunction;

- (BOOL)shouldAcceptXPCConnection:(id)a0;
- (int)startWithArguments:(const char **)a0 count:(int)a1;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)willFinishLaunching;
- (void)checkIn;
- (void)didFinishLaunching;
- (int)_startWithArguments:(const char **)a0 count:(int)a1;
- (void).cxx_destruct;
- (void)resume;

@end
