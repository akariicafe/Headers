@interface TSCETrackedReferenceTSPObjectDeprecated : TSPObject {
    struct TSCEASTNodeArray { char *x0; unsigned long long x1; unsigned long long x2; id x3; BOOL x4; } *mAST;
    struct { unsigned long formulaID : 48; } mFormulaID;
}

- (struct TSCEASTNodeArray { char *x0; unsigned long long x1; unsigned long long x2; id x3; BOOL x4; } *)ast;
- (void)dealloc;
- (void)saveToArchiver:(id)a0;
- (void)encodeToArchive:(struct TrackedReferenceArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct ASTNodeArrayArchive *x4; unsigned int x5; } *)a0;
- (BOOL)validatedLoadFromUnarchiver:(id)a0;
- (struct { unsigned long x0 : 48; })formulaID;

@end
