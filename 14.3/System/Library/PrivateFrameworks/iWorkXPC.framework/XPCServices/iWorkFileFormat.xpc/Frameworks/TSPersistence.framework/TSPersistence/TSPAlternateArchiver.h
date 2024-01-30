@class NSString, TSPArchiverBase;

@interface TSPAlternateArchiver : TSPArchiverBase <TSPKnownFieldRuleProvider> {
    struct RepeatedPtrField<TSP::FieldPath> { struct Arena *arena_; int current_size_; int total_size_; struct Rep *rep_; } _fieldPathsToRemove;
    struct { unsigned char hasPreserveNewerValueRule : 1; unsigned char hasPreserveNewerValueUntilModifiedRule : 1; } _flags;
}

@property (readonly, nonatomic) const struct FieldPath { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RepeatedField<unsigned int> { int x0; int x1; union Pointer { struct Arena *x0; struct Rep *x1; } x2; } x4; int x5; } *fieldPath;
@property (readonly, nonatomic) unsigned long long diffReadVersion;
@property (readonly, weak, nonatomic) TSPArchiverBase *parentArchiver;
@property (readonly, nonatomic) const struct RepeatedPtrField<TSP::FieldPath> { struct Arena *x0; int x1; int x2; struct Rep *x3; } *fieldPathsToRemove;
@property (readonly, nonatomic) BOOL isDiff;
@property (readonly, nonatomic) BOOL isContentUnknown;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithObject:(id)a0;
- (void)dealloc;
- (id).cxx_construct;
- (id)alternateDiffToMergeBeforeVersion:(unsigned long long)a0 fileFormatVersion:(unsigned long long)a1 message:(const struct Message { void /* function */ **x0; } *)a2;
- (void)removeField:(int)a0 message:(const struct Message { void /* function */ **x0; } *)a1;
- (id)alternateDiffToMergeBeforeVersion:(unsigned long long)a0 fileFormatVersion:(unsigned long long)a1 fieldPath:(int *)a2 message:(const struct Message { void /* function */ **x0; } *)a3;
- (const struct FieldPath { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RepeatedField<unsigned int> { int x0; int x1; union Pointer { struct Arena *x0; struct Rep *x1; } x2; } x4; int x5; } *)baseFieldPathAndReturnShouldDeleteReturnedValue:(BOOL *)a0;
- (id)initWithObject:(id)a0 version:(unsigned long long)a1 fieldPath:(const struct FieldPath { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RepeatedField<unsigned int> { int x0; int x1; union Pointer { struct Arena *x0; struct Rep *x1; } x2; } x4; int x5; } *)a2 isDiff:(BOOL)a3 diffReadVersion:(unsigned long long)a4 parentArchiver:(id)a5;
- (id)alternateDiffToMergeBeforeVersion:(unsigned long long)a0 fileFormatVersion:(unsigned long long)a1 field:(int)a2 message:(const struct Message { void /* function */ **x0; } *)a3;
- (BOOL)isSavingDocumentAs;
- (BOOL)isSavingCollaborativeDocument;
- (void)p_setPreserveNewerValueRuleForFieldPath:(int *)a0 fileFormatVersion:(unsigned long long)a1 featureIdentifier:(id)a2 message:(const struct Message { void /* function */ **x0; } *)a3;
- (void)p_setPreserveNewerValueUntilModifiedRuleForFieldPath:(int *)a0 fileFormatVersion:(unsigned long long)a1 featureIdentifier:(id)a2 message:(const struct Message { void /* function */ **x0; } *)a3;
- (id)parentAlternateDiffToMergeBeforeVersion:(unsigned long long)a0 fileFormatVersion:(unsigned long long)a1 fieldPath:(int *)a2 message:(const struct Message { void /* function */ **x0; } *)a3;
- (void)enumerateKnownFieldRulesUsingBlock:(id /* block */)a0;
- (void)setPreserveNewerValueRuleForField:(int)a0 fileFormatVersion:(unsigned long long)a1 message:(const struct Message { void /* function */ **x0; } *)a2;
- (void)setPreserveNewerValueRuleForField:(int)a0 fileFormatVersion:(unsigned long long)a1 featureIdentifier:(id)a2 message:(const struct Message { void /* function */ **x0; } *)a3;
- (void)setPreserveNewerValueRuleForFieldPath:(int *)a0 fileFormatVersion:(unsigned long long)a1 message:(const struct Message { void /* function */ **x0; } *)a2;
- (void)setPreserveNewerValueRuleForFieldPath:(int *)a0 fileFormatVersion:(unsigned long long)a1 featureIdentifier:(id)a2 message:(const struct Message { void /* function */ **x0; } *)a3;
- (void)setPreserveNewerValueUntilModifiedRuleForField:(int)a0 fileFormatVersion:(unsigned long long)a1 message:(const struct Message { void /* function */ **x0; } *)a2;
- (void)setPreserveNewerValueUntilModifiedRuleForField:(int)a0 fileFormatVersion:(unsigned long long)a1 featureIdentifier:(id)a2 message:(const struct Message { void /* function */ **x0; } *)a3;
- (void)setPreserveNewerValueUntilModifiedRuleForFieldPath:(int *)a0 fileFormatVersion:(unsigned long long)a1 message:(const struct Message { void /* function */ **x0; } *)a2;
- (void)setPreserveNewerValueUntilModifiedRuleForFieldPath:(int *)a0 fileFormatVersion:(unsigned long long)a1 featureIdentifier:(id)a2 message:(const struct Message { void /* function */ **x0; } *)a3;
- (void)removeFieldAtEndOfPath:(int *)a0 message:(const struct Message { void /* function */ **x0; } *)a1;

@end
