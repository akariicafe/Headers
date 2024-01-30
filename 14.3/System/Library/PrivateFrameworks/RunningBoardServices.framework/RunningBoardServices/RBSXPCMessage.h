@class RBSXPCMessageReply, RBSXPCCoder, NSError, NSObject;
@protocol OS_xpc_object;

@interface RBSXPCMessage : NSObject {
    NSObject<OS_xpc_object> *_xpc_message;
    RBSXPCCoder *_payload;
}

@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, nonatomic) SEL method;
@property (readonly, nonatomic) RBSXPCMessageReply *reply;
@property (readonly, nonatomic) NSError *error;

+ (id)messageForXPCMessage:(id)a0;
+ (id)messageForMethod:(SEL)a0 varguments:(id)a1;

- (oneway void)sendToConnection:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)sendToConnection:(id)a0 error:(out id *)a1;
- (oneway void)sendToConnection:(id)a0 replyQueue:(id)a1 completion:(id /* block */)a2;
- (id)decodeArgumentWithClass:(Class)a0 atIndex:(unsigned long long)a1 allowNil:(BOOL)a2 error:(out id *)a3;
- (id)decodeArgumentCollection:(Class)a0 withClass:(Class)a1 atIndex:(unsigned long long)a2 allowNil:(BOOL)a3 error:(out id *)a4;
- (oneway void)sendToConnection:(id)a0 completion:(id /* block */)a1;
- (id)invokeOnConnection:(id)a0 withReturnCollectionClass:(Class)a1 entryClass:(Class)a2 error:(out id *)a3;
- (id)invokeOnConnection:(id)a0 withReturnClass:(Class)a1 error:(out id *)a2;

@end
