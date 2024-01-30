@class Protocol;

@interface NSXPCInterface : NSObject {
    Protocol *_protocol;
    void *_reserved2;
    id _reserved1;
}

@property Protocol *protocol;

+ (id)interfaceWithProtocol:(id)a0;
+ (id)signatureForBlock:(id)a0;

- (void)setClass:(Class)a0 forSelector:(SEL)a1 argumentIndex:(unsigned long long)a2 ofReply:(BOOL)a3;
- (void)setInterface:(id)a0 forSelector:(SEL)a1 argumentIndex:(unsigned long long)a2 ofReply:(BOOL)a3;
- (BOOL)_selectorIsAllowed:(SEL)a0 isReply:(BOOL)a1 methodSignature:(id *)a2 allowedClasses:(id *)a3;
- (id)init;
- (id)_generateAndCacheMethodSignatureForRemoteSelector:(SEL)a0;
- (void)setXPCType:(struct _xpc_type_s { } *)a0 forSelector:(SEL)a1 argumentIndex:(unsigned long long)a2 ofReply:(BOOL)a3;
- (BOOL)_hasProxiesInReplyBlockArgumentsOfSelector:(SEL)a0;
- (id)interfaceForSelector:(SEL)a0 argumentIndex:(unsigned long long)a1 ofReply:(BOOL)a2;
- (const struct _xpc_type_s { } *)XPCTypeForSelector:(SEL)a0 argumentIndex:(unsigned long long)a1 ofReply:(BOOL)a2;
- (id)_methodSignatureForReplyBlockOfSelector:(SEL)a0;
- (void)dealloc;
- (id)_interfaceForArgument:(unsigned long long)a0 ofSelector:(SEL)a1 reply:(BOOL)a2;
- (Class)classForSelector:(SEL)a0 argumentIndex:(unsigned long long)a1 ofReply:(BOOL)a2;
- (BOOL)_hasProxiesInArgumentsOfSelector:(SEL)a0;
- (void)setReplyBlockSignature:(id)a0 forSelector:(SEL)a1;
- (void)setClasses:(id)a0 forSelector:(SEL)a1 argumentIndex:(unsigned long long)a2 ofReply:(BOOL)a3;
- (id)replyBlockSignatureForSelector:(SEL)a0;
- (unsigned long long)_remoteVersion;
- (unsigned long long)version;
- (Class)_customSubclass;
- (id)classesForSelector:(SEL)a0 argumentIndex:(unsigned long long)a1 ofReply:(BOOL)a2;
- (Class)_returnClassForSelector:(SEL)a0;
- (void)setVersion:(unsigned long long)a0 forSelector:(SEL)a1;
- (unsigned long long)versionForSelector:(SEL)a0;
- (void)set_remoteVersion:(unsigned long long)a0;
- (unsigned long long)_respondsToRemoteSelector:(SEL)a0;
- (id)debugDescription;
- (id)_methodSignatureForRemoteSelector:(SEL)a0;

@end
