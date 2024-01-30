@class NSMutableArray, HMCContext;

@interface HMCContextProvider : HMFObject

@property (readonly) NSMutableArray *redirections;
@property (readonly) HMCContext *context;

- (void)performBlock:(id /* block */)a0;
- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (void)unsafeSynchronousBlock:(id /* block */)a0;
- (void)kickClient;
- (void)registerForChangesOfDatabaseModels:(id)a0 orWithModelIDs:(id)a1 changeMask:(unsigned long long)a2 selector:(SEL)a3;
- (id)futureInContext:(id /* block */)a0;
- (void)removeAllRegistrations;

@end
