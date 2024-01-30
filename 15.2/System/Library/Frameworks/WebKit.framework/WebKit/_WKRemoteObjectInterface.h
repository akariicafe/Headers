@class NSString, Protocol;

@interface _WKRemoteObjectInterface : NSObject {
    struct RetainPtr<NSString> { void *m_ptr; } _identifier;
    struct HashMap<SEL *, MethodInfo, WTF::DefaultHash<SEL *>, WTF::HashTraits<SEL *>, WTF::HashTraits<MethodInfo>, WTF::HashTableTraits> { struct HashTable<SEL *, WTF::KeyValuePair<SEL *, MethodInfo>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<SEL *, MethodInfo>>, WTF::DefaultHash<SEL *>, WTF::HashMap<SEL *, MethodInfo>::KeyValuePairTraits, WTF::HashTraits<SEL *>> { union { void *m_table; unsigned int *m_tableForLLDB; } ; } m_impl; } _methods;
}

@property (readonly, nonatomic) Protocol *protocol;
@property (readonly, nonatomic) NSString *identifier;

+ (id)remoteObjectInterfaceWithProtocol:(id)a0;

- (id)_invocationForSelector:(SEL)a0;
- (id)classesForSelector:(SEL)a0 argumentIndex:(unsigned long long)a1 ofReply:(BOOL)a2;
- (const void *)_allowedArgumentClassesForSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)_invocationForReplyBlockOfSelector:(SEL)a0;
- (const void *)_allowedArgumentClassesForReplyBlockOfSelector:(SEL)a0;
- (id)initWithProtocol:(id)a0 identifier:(id)a1;
- (void)setClasses:(id)a0 forSelector:(SEL)a1 argumentIndex:(unsigned long long)a2;
- (id)classesForSelector:(SEL)a0 argumentIndex:(unsigned long long)a1;
- (id).cxx_construct;
- (void)setClasses:(id)a0 forSelector:(SEL)a1 argumentIndex:(unsigned long long)a2 ofReply:(BOOL)a3;
- (id)debugDescription;

@end
