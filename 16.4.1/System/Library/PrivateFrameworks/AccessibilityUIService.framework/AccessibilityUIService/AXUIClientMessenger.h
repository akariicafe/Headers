@class NSString, AXMultiplexConnectionHandler;

@interface AXUIClientMessenger : NSObject

@property (copy, nonatomic) NSString *clientIdentifier;
@property (retain, nonatomic) AXMultiplexConnectionHandler *connection;

+ (id)clientMessengerWithIdentifier:(id)a0;

- (id)sendSynchronousMessage:(id)a0 withIdentifier:(unsigned long long)a1 error:(id *)a2;
- (id)initWithClientIdentifier:(id)a0 connection:(id)a1;
- (id)init;
- (id)description;
- (void)sendAsynchronousMessage:(id)a0 withIdentifier:(unsigned long long)a1 targetAccessQueue:(id)a2 completionRequiresWritingBlock:(BOOL)a3 completion:(id /* block */)a4;
- (void).cxx_destruct;
- (void)sendAsynchronousMessage:(id)a0 withIdentifier:(unsigned long long)a1 targetAccessQueue:(id)a2 completion:(id /* block */)a3;

@end
