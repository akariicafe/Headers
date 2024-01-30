@class NSObject;
@protocol OS_xpc_object;

@interface RBSXPCMessageContext : NSObject {
    NSObject<OS_xpc_object> *_handoffToken;
}

@property (readonly, nonatomic) NSObject<OS_xpc_object> *connection;

+ (void)runWithoutContext:(id /* block */)a0;
+ (id)currentContext;

- (void).cxx_destruct;
- (void)handoffToQueue:(id)a0 block:(id /* block */)a1;

@end
