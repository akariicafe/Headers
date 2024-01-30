@class NSString, Protocol;

@interface _WKRemoteObjectInterface : NSObject {
    struct RetainPtr<NSString> { void *m_ptr; } _identifier;
    struct HashMap<SEL *, MethodInfo, WTF::DefaultHash<SEL *>, WTF::HashTraits<SEL *>, WTF::HashTraits<MethodInfo> > { struct HashTable<SEL *, WTF::KeyValuePair<SEL *, MethodInfo>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<SEL *, MethodInfo> >, WTF::DefaultHash<SEL *>, WTF::HashMap<SEL *, MethodInfo, WTF::DefaultHash<SEL *>, WTF::HashTraits<SEL *>, WTF::HashTraits<MethodInfo> >::KeyValuePairTraits, WTF::HashTraits<SEL *> > { struct KeyValuePair<SEL *, MethodInfo> *m_table; } m_impl; } _methods;
}

@property (readonly, nonatomic) Protocol *protocol;
@property (readonly, nonatomic) NSString *identifier;

+ (id)remoteObjectInterfaceWithProtocol:(id)a0;

- (void).cxx_destruct;
- (id)_methodSignatureForReplyBlockOfSelector:(SEL)a0;
- (id)classesForSelector:(SEL)a0 argumentIndex:(unsigned long long)a1;
- (const struct Vector<WTF::HashSet<const void *, WTF::DefaultHash<const void *>, WTF::HashTraits<const void *> >, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> { struct HashSet<const void *, WTF::DefaultHash<const void *>, WTF::HashTraits<const void *> > *x0; unsigned int x1; unsigned int x2; } *)_allowedArgumentClassesForSelector:(SEL)a0;
- (void)setClasses:(id)a0 forSelector:(SEL)a1 argumentIndex:(unsigned long long)a2 ofReply:(BOOL)a3;
- (id)classesForSelector:(SEL)a0 argumentIndex:(unsigned long long)a1 ofReply:(BOOL)a2;
- (id).cxx_construct;
- (void)setClasses:(id)a0 forSelector:(SEL)a1 argumentIndex:(unsigned long long)a2;
- (id)debugDescription;
- (const struct Vector<WTF::HashSet<const void *, WTF::DefaultHash<const void *>, WTF::HashTraits<const void *> >, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> { struct HashSet<const void *, WTF::DefaultHash<const void *>, WTF::HashTraits<const void *> > *x0; unsigned int x1; unsigned int x2; } *)_allowedArgumentClassesForReplyBlockOfSelector:(SEL)a0;
- (id)initWithProtocol:(id)a0 identifier:(id)a1;
- (id)_methodSignatureForSelector:(SEL)a0;

@end
