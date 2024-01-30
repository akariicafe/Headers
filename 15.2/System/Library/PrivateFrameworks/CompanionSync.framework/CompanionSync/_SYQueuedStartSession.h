@class SYStartSyncSession;

@interface _SYQueuedStartSession : NSObject

@property (readonly, nonatomic) SYStartSyncSession *request;
@property (readonly, nonatomic) id /* block */ completion;

- (void).cxx_destruct;
- (id)initWithRequest:(id)a0 completion:(id /* block */)a1;

@end
