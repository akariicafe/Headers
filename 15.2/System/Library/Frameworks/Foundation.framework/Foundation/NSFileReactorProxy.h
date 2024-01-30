@class NSFileAccessNode, NSXPCConnection;

@interface NSFileReactorProxy : NSObject {
    NSXPCConnection *_client;
    id _reactorID;
    NSFileAccessNode *_itemLocation;
    unsigned int _effectiveUserIdentifier;
}

@property unsigned int effectiveUserIdentifier;

+ (void)_enumerateParentDirectoriesStartingAtURL:(id)a0 usingBlock:(id /* block */)a1;

- (id)client;
- (void)setItemLocation:(id)a0;
- (id)descriptionWithIndenting:(id)a0;
- (id)reactorID;
- (id)itemLocation;
- (void)forwardUsingProxy:(id)a0;
- (BOOL)allowedForURL:(id)a0;
- (id)description;
- (id)initWithClient:(id)a0 reactorID:(id)a1;
- (void)invalidate;
- (void)collectDebuggingInformationWithCompletionHandler:(id /* block */)a0;
- (void)dealloc;
- (id)_clientProxy;

@end
