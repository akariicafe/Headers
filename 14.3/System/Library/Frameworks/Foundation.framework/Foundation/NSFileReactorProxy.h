@class NSFileAccessNode, NSXPCConnection;

@interface NSFileReactorProxy : NSObject {
    NSXPCConnection *_client;
    id _reactorID;
    NSFileAccessNode *_itemLocation;
    unsigned int _effectiveUserIdentifier;
}

@property unsigned int effectiveUserIdentifier;

+ (void)_enumerateParentDirectoriesStartingAtURL:(id)a0 usingBlock:(id /* block */)a1;

- (void)collectDebuggingInformationWithCompletionHandler:(id /* block */)a0;
- (id)reactorID;
- (void)forwardUsingProxy:(id)a0;
- (void)dealloc;
- (id)itemLocation;
- (id)_clientProxy;
- (id)initWithClient:(id)a0 reactorID:(id)a1;
- (id)description;
- (id)descriptionWithIndenting:(id)a0;
- (id)client;
- (void)setItemLocation:(id)a0;
- (BOOL)allowedForURL:(id)a0;
- (void)invalidate;

@end
