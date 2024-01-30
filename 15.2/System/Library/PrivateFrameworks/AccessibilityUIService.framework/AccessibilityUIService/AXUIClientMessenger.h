@class NSString, NSObject;
@protocol OS_xpc_object;

@interface AXUIClientMessenger : NSObject

@property (copy, nonatomic) NSString *clientIdentifier;
@property (retain, nonatomic) NSObject<OS_xpc_object> *connection;

+ (id)clientMessengerWithIdentifier:(id)a0;

- (void)sendAsynchronousMessage:(id)a0 withIdentifier:(unsigned long long)a1 targetAccessQueue:(id)a2 completionRequiresWritingBlock:(BOOL)a3 completion:(id /* block */)a4;
- (id)initWithClientIdentifier:(id)a0 connection:(id)a1;
- (id)sendSynchronousMessage:(id)a0 withIdentifier:(unsigned long long)a1 error:(id *)a2;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (void)sendAsynchronousMessage:(id)a0 withIdentifier:(unsigned long long)a1 targetAccessQueue:(id)a2 completion:(id /* block */)a3;

@end
