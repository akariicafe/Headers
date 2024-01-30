@class NSString, MCMContainerSchemaContext;

@interface MCMContainerSchemaActionBase : NSObject <MCMContainerSchemaAction>

@property (readonly, nonatomic) MCMContainerSchemaContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)actionIdentifier;
+ (void)_resolveArguments:(id)a0 toPathArgument:(id *)a1 context:(id)a2;
+ (void)_resolveArguments:(id)a0 toSourcePathArgument:(id *)a1 destPathArgument:(id *)a2 context:(id)a3;
+ (id)actionWithName:(id)a0 arguments:(id)a1 context:(id)a2 error:(id *)a3;

- (id)initWithContext:(id)a0;
- (BOOL)fixAndRetryIfPermissionsErrorWithURL:(id)a0 error:(id *)a1 duringBlock:(id /* block */)a2;
- (void).cxx_destruct;
- (BOOL)performWithError:(id *)a0;
- (BOOL)backupFileURL:(id)a0 error:(id *)a1;
- (BOOL)makedirAtURL:(id)a0 followTerminalSymlink:(BOOL)a1 error:(id *)a2;

@end
