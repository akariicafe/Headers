@class NSCoreDataXPCMessage, NSDictionary, NSXPCStore, NSError;

@interface NSXPCStoreMessageContext : NSObject {
    NSXPCStore *_store;
    NSCoreDataXPCMessage *_message;
    NSDictionary *_result;
    NSError *_error;
}

- (id)initForMessage:(id)a0 store:(id)a1;
- (void)dealloc;

@end
