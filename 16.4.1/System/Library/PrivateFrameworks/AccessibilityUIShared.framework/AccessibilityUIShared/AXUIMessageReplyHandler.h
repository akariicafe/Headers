@interface AXUIMessageReplyHandler : NSObject

+ (id)createReplyObject:(id)a0 fromMessage:(id)a1 withError:(id)a2;
+ (void)sendReply:(id)a0 withError:(id)a1 andOriginalXPCMessage:(id)a2 usingConnection:(id)a3 customDataAddingBlock:(id /* block */)a4;

@end
