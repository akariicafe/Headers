@class ClientConnection, NSMutableDictionary;

@interface CADOperationProxy : NSObject {
    ClientConnection *_conn;
    NSMutableDictionary *_operationGroups;
}

+ (id)allOperationGroupClasses;
+ (Class)_operationGroupClassFromSelector:(SEL)a0;
+ (BOOL)_selectorMayBeCalledBeforeInitialization:(SEL)a0;
+ (Class)operationProxyClassForClientWithConnection:(id)a0;

- (id)forwardingTargetForSelector:(SEL)a0;
- (id)initWithClientConnection:(id)a0;
- (void)dealloc;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;
- (void)_callReplyHandler:(id)a0 ofInvocation:(id)a1 withError:(int)a2;
- (id)_copyReplyBlockFromInvocation:(id)a0;
- (void)_emptyMethod;
- (id)_operationGroupForClass:(Class)a0;

@end
