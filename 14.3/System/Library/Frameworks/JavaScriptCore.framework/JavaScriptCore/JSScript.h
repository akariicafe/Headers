@interface JSScript : NSObject {
    struct WeakObjCPtr<JSVirtualMachine> { id m_weakReference; } m_virtualMachine;
    long long m_type;
    struct MappedFileData { void *m_fileData; unsigned int m_fileSize; } m_mappedSource;
    struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl *m_ptr; } m_impl; } m_source;
    struct RetainPtr<NSURL> { void *m_ptr; } m_sourceURL;
    struct RetainPtr<NSURL> { void *m_ptr; } m_cachePath;
    struct RefPtr<JSC::CachedBytecode, WTF::DumbPtrTraits<JSC::CachedBytecode> > { struct CachedBytecode *m_ptr; } m_cachedBytecode;
}

+ (id)scriptOfType:(long long)a0 withSource:(id)a1 andSourceURL:(id)a2 andBytecodeCache:(id)a3 inVirtualMachine:(id)a4 error:(out id *)a5;
+ (id)scriptOfType:(long long)a0 memoryMappedFromASCIIFile:(id)a1 withSourceURL:(id)a2 andBytecodeCache:(id)a3 inVirtualMachine:(id)a4 error:(out id *)a5;

- (id)sourceURL;
- (BOOL)writeCache:(struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl *x0; } x0; } *)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isUsingBytecodeCache;
- (unsigned int)hash;
- (long long)type;
- (struct SourceCode { struct RefPtr<JSC::SourceProvider, WTF::DumbPtrTraits<JSC::SourceProvider> > { struct SourceProvider *x0; } x0; int x1; int x2; struct OrdinalNumber { int x0; } x3; struct OrdinalNumber { int x0; } x4; })sourceCode;
- (struct RefPtr<JSC::CachedBytecode, WTF::DumbPtrTraits<JSC::CachedBytecode> > { struct CachedBytecode *x0; })cachedBytecode;
- (id).cxx_construct;
- (const struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl *x0; } x0; } *)source;
- (void)readCache;
- (BOOL)cacheBytecodeWithError:(id *)a0;
- (struct JSSourceCode { unsigned int x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; struct SourceCode { struct RefPtr<JSC::SourceProvider, WTF::DumbPtrTraits<JSC::SourceProvider> > { struct SourceProvider *x0; } x0; int x1; int x2; struct OrdinalNumber { int x0; } x3; struct OrdinalNumber { int x0; } x4; } x5; } *)jsSourceCode;

@end
