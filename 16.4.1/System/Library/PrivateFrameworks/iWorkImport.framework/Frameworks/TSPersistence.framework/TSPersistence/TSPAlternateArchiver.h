@class NSString, TSPArchiverBase;

@interface TSPAlternateArchiver : TSPArchiverBase <TSPKnownFieldRuleProvider> {
    struct RepeatedPtrField<TSP::FieldPath> { struct Arena *arena_; int current_size_; int total_size_; struct Rep *rep_; } _fieldPathsToRemove;
    struct { unsigned char hasPreserveNewerValueRule : 1; unsigned char hasPreserveNewerValueUntilModifiedRule : 1; } _flags;
}

@property (readonly, nonatomic) const void *fieldPath;
@property (readonly, nonatomic) unsigned long long diffReadVersion;
@property (readonly, weak, nonatomic) TSPArchiverBase *parentArchiver;
@property (readonly, nonatomic) const void *fieldPathsToRemove;
@property (readonly, nonatomic) BOOL isDiff;
@property (readonly, nonatomic) BOOL isContentUnknown;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithObject:(id)a0;
- (id).cxx_construct;
- (void)dealloc;
- (void).cxx_destruct;
- (id)alternateDiffToMergeBeforeVersion:(unsigned long long)a0 fileFormatVersion:(unsigned long long)a1 message:(const struct Message { void /* function */ **x0; struct InternalMetadata { void *x0; } x1; } *)a2;
- (void)removeField:(int)a0 message:(const struct Message { void /* function */ **x0; struct InternalMetadata { void *x0; } x1; } *)a1;
- (void)removeFieldAtEndOfPath:(int *)a0 message:(const struct Message { void /* function */ **x0; struct InternalMetadata { void *x0; } x1; } *)a1;
- (id)alternateDiffToMergeBeforeVersion:(unsigned long long)a0 fileFormatVersion:(unsigned long long)a1 field:(int)a2 message:(const struct Message { void /* function */ **x0; struct InternalMetadata { void *x0; } x1; } *)a3;
- (id)alternateDiffToMergeBeforeVersion:(unsigned long long)a0 fileFormatVersion:(unsigned long long)a1 fieldPath:(int *)a2 message:(const struct Message { void /* function */ **x0; struct InternalMetadata { void *x0; } x1; } *)a3;
- (const void *)baseFieldPathAndReturnShouldDeleteReturnedValue:(BOOL *)a0;
- (void)enumerateKnownFieldRulesUsingBlock:(id /* block */)a0;
- (id)initWithObject:(id)a0 version:(unsigned long long)a1 fieldPath:(const void *)a2 isDiff:(BOOL)a3 diffReadVersion:(unsigned long long)a4 parentArchiver:(id)a5;
- (BOOL)isSavingCollaborativeDocument;
- (BOOL)isSavingDocumentAs;
- (void)p_setPreserveNewerValueRuleForFieldPath:(int *)a0 fileFormatVersion:(unsigned long long)a1 featureIdentifier:(id)a2 message:(const struct Message { void /* function */ **x0; struct InternalMetadata { void *x0; } x1; } *)a3;
- (void)p_setPreserveNewerValueUntilModifiedRuleForFieldPath:(int *)a0 fileFormatVersion:(unsigned long long)a1 featureIdentifier:(id)a2 message:(const struct Message { void /* function */ **x0; struct InternalMetadata { void *x0; } x1; } *)a3;
- (id)parentAlternateDiffToMergeBeforeVersion:(unsigned long long)a0 fileFormatVersion:(unsigned long long)a1 fieldPath:(int *)a2 message:(const struct Message { void /* function */ **x0; struct InternalMetadata { void *x0; } x1; } *)a3;
- (void)setPreserveNewerValueRuleForField:(int)a0 fileFormatVersion:(unsigned long long)a1 featureIdentifier:(id)a2 message:(const struct Message { void /* function */ **x0; struct InternalMetadata { void *x0; } x1; } *)a3;
- (void)setPreserveNewerValueRuleForField:(int)a0 fileFormatVersion:(unsigned long long)a1 message:(const struct Message { void /* function */ **x0; struct InternalMetadata { void *x0; } x1; } *)a2;
- (void)setPreserveNewerValueRuleForFieldPath:(int *)a0 fileFormatVersion:(unsigned long long)a1 featureIdentifier:(id)a2 message:(const struct Message { void /* function */ **x0; struct InternalMetadata { void *x0; } x1; } *)a3;
- (void)setPreserveNewerValueRuleForFieldPath:(int *)a0 fileFormatVersion:(unsigned long long)a1 message:(const struct Message { void /* function */ **x0; struct InternalMetadata { void *x0; } x1; } *)a2;
- (void)setPreserveNewerValueUntilModifiedRuleForField:(int)a0 fileFormatVersion:(unsigned long long)a1 featureIdentifier:(id)a2 message:(const struct Message { void /* function */ **x0; struct InternalMetadata { void *x0; } x1; } *)a3;
- (void)setPreserveNewerValueUntilModifiedRuleForField:(int)a0 fileFormatVersion:(unsigned long long)a1 message:(const struct Message { void /* function */ **x0; struct InternalMetadata { void *x0; } x1; } *)a2;
- (void)setPreserveNewerValueUntilModifiedRuleForFieldPath:(int *)a0 fileFormatVersion:(unsigned long long)a1 featureIdentifier:(id)a2 message:(const struct Message { void /* function */ **x0; struct InternalMetadata { void *x0; } x1; } *)a3;
- (void)setPreserveNewerValueUntilModifiedRuleForFieldPath:(int *)a0 fileFormatVersion:(unsigned long long)a1 message:(const struct Message { void /* function */ **x0; struct InternalMetadata { void *x0; } x1; } *)a2;

@end
