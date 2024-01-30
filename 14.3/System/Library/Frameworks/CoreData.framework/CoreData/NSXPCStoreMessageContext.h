@class NSCoreDataXPCMessage, NSDictionary, NSXPCStore, NSError;

@interface NSXPCStoreMessageContext : NSObject

@property (readonly, nonatomic) NSCoreDataXPCMessage *message;
@property (readonly, nonatomic) NSXPCStore *store;
@property (retain, nonatomic) NSDictionary *result;
@property (retain, nonatomic) NSError *error;

- (void)dealloc;
- (id)initForMessage:(id)a0 store:(id)a1;

@end
