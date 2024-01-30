@class NSObject;
@protocol OS_xpc_object;

@interface RBSXPCMessageContext : NSObject {
    NSObject<OS_xpc_object> *_handoffToken;
}

@property (readonly, nonatomic) NSObject<OS_xpc_object> *connection;

+ (id)currentContext;
+ (void)runWithoutContext:(id /* block */)a0;

- (void)handoffToQueue:(id)a0 block:(id /* block */)a1;
- (void).cxx_destruct;

@end
