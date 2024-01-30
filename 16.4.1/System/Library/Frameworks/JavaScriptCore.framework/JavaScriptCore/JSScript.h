@interface JSScript : NSObject {
    struct WeakObjCPtr<JSVirtualMachine> { id m_weakReference; } m_virtualMachine;
    long long m_type;
    struct MappedFileData { void *m_fileData; unsigned int m_fileSize; } m_mappedSource;
    struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl *m_ptr; } m_impl; } m_source;
    struct RetainPtr<NSURL> { void *m_ptr; } m_sourceURL;
    struct RetainPtr<NSURL> { void *m_ptr; } m_cachePath;
    struct RefPtr<JSC::CachedBytecode, WTF::RawPtrTraits<JSC::CachedBytecode>, WTF::DefaultRefDerefTraits<JSC::CachedBytecode>> { struct CachedBytecode *m_ptr; } m_cachedBytecode;
}

+ (id)scriptOfType:(long long)a0 withSource:(id)a1 andSourceURL:(id)a2 andBytecodeCache:(id)a3 inVirtualMachine:(id)a4 error:(out id *)a5;
+ (id)scriptOfType:(long long)a0 memoryMappedFromASCIIFile:(id)a1 withSourceURL:(id)a2 andBytecodeCache:(id)a3 inVirtualMachine:(id)a4 error:(out id *)a5;

- (void *)jsSourceCode;
- (struct SourceCode { struct RefPtr<JSC::SourceProvider, WTF::RawPtrTraits<JSC::SourceProvider>, WTF::DefaultRefDerefTraits<JSC::SourceProvider>> { struct SourceProvider *x0; } x0; int x1; int x2; struct OrdinalNumber { int x0; } x3; struct OrdinalNumber { int x0; } x4; })sourceCode;
- (id).cxx_construct;
- (id)sourceURL;
- (long long)type;
- (struct RefPtr<JSC::CachedBytecode, WTF::RawPtrTraits<JSC::CachedBytecode>, WTF::DefaultRefDerefTraits<JSC::CachedBytecode>> { struct CachedBytecode *x0; })cachedBytecode;
- (void)readCache;
- (unsigned int)hash;
- (BOOL)writeCache:(void *)a0;
- (id)init;
- (BOOL)isUsingBytecodeCache;
- (BOOL)cacheBytecodeWithError:(id *)a0;
- (void).cxx_destruct;
- (const void *)source;

@end
