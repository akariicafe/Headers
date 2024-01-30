@class Protocol;

@interface NSXPCInterface : NSObject {
    Protocol *_protocol;
    unsigned long long _remoteVersion;
    struct __CFDictionary { } *_knownSelectors;
    struct __CFDictionary { } *_methodInfo;
    Class _xpcDOSubclass;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _knownSelectorsLock;
    BOOL _specialCaseObject;
}

@property Protocol *protocol;

+ (id)interfaceWithProtocol:(id)a0;
+ (id)signatureForBlock:(id)a0;

- (unsigned long long)version;
- (id)classesForSelector:(SEL)a0 argumentIndex:(unsigned long long)a1 ofReply:(BOOL)a2;
- (id)debugDescription;
- (void)setClasses:(id)a0 forSelector:(SEL)a1 argumentIndex:(unsigned long long)a2 ofReply:(BOOL)a3;
- (void)dealloc;
- (id)init;
- (Class)_customSubclass;
- (const struct _xpc_type_s { } *)XPCTypeForSelector:(SEL)a0 argumentIndex:(unsigned long long)a1 ofReply:(BOOL)a2;
- (id)replyBlockSignatureForSelector:(SEL)a0;
- (id)_generateAndCacheMethodSignatureForRemoteSelector:(SEL)a0;
- (BOOL)_hasProxiesInArgumentsOfSelector:(SEL)a0;
- (BOOL)_hasProxiesInReplyBlockArgumentsOfSelector:(SEL)a0;
- (id)_interfaceForArgument:(unsigned long long)a0 ofSelector:(SEL)a1 reply:(BOOL)a2;
- (id)_methodSignatureForRemoteSelector:(SEL)a0;
- (id)_methodSignatureForReplyBlockOfSelector:(SEL)a0;
- (unsigned long long)_remoteVersion;
- (unsigned long long)_respondsToRemoteSelector:(SEL)a0;
- (Class)_returnClassForSelector:(SEL)a0;
- (BOOL)_selectorIsAllowed:(SEL)a0 isReply:(BOOL)a1 methodSignature:(id *)a2 allowedClasses:(id *)a3;
- (BOOL)_specialCaseObject;
- (Class)classForSelector:(SEL)a0 argumentIndex:(unsigned long long)a1 ofReply:(BOOL)a2;
- (id)interfaceForSelector:(SEL)a0 argumentIndex:(unsigned long long)a1 ofReply:(BOOL)a2;
- (void)setClass:(Class)a0 forSelector:(SEL)a1 argumentIndex:(unsigned long long)a2 ofReply:(BOOL)a3;
- (void)setInterface:(id)a0 forSelector:(SEL)a1 argumentIndex:(unsigned long long)a2 ofReply:(BOOL)a3;
- (void)setReplyBlockSignature:(id)a0 forSelector:(SEL)a1;
- (void)setVersion:(unsigned long long)a0 forSelector:(SEL)a1;
- (void)setXPCType:(struct _xpc_type_s { } *)a0 forSelector:(SEL)a1 argumentIndex:(unsigned long long)a2 ofReply:(BOOL)a3;
- (void)set_remoteVersion:(unsigned long long)a0;
- (unsigned long long)versionForSelector:(SEL)a0;

@end
