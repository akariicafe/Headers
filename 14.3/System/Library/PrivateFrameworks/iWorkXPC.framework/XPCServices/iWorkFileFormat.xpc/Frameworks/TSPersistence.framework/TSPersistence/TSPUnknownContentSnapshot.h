@class NSArray, NSString;

@interface TSPUnknownContentSnapshot : NSObject <TSPKnownFieldRuleProvider> {
    NSArray *_preserveFields;
    NSArray *_preserveUntilModifiedFields;
    BOOL _shouldIncludePreserveUntilModifiedFieldsInKnownFieldRuleEnumeration;
}

@property (readonly, nonatomic) NSArray *messages;
@property (readonly, nonatomic) BOOL isContentUnknown;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)saveToArchiver:(id)a0;
- (id)newUnknownContentSnapshotWithMessages:(id)a0;
- (void)updateMessageInfo:(struct MessageInfo { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RepeatedField<unsigned int> { int x0; int x1; union Pointer { struct Arena *x0; struct Rep *x1; } x2; } x4; int x5; struct RepeatedPtrField<TSP::FieldInfo> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x6; struct RepeatedField<unsigned long long> { int x0; int x1; union Pointer { struct Arena *x0; struct Rep *x1; } x2; } x7; int x8; struct RepeatedField<unsigned long long> { int x0; int x1; union Pointer { struct Arena *x0; struct Rep *x1; } x2; } x9; int x10; struct RepeatedField<unsigned int> { int x0; int x1; union Pointer { struct Arena *x0; struct Rep *x1; } x2; } x11; int x12; struct RepeatedPtrField<TSP::FieldPath> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x13; struct RepeatedField<unsigned int> { int x0; int x1; union Pointer { struct Arena *x0; struct Rep *x1; } x2; } x14; int x15; struct FieldPath *x16; unsigned int x17; unsigned int x18; unsigned int x19; } *)a0;
- (void)enumerateKnownFieldRulesUsingBlock:(id /* block */)a0;
- (id)initWithMessages:(id)a0 preserveFields:(id)a1 preserveUntilModifiedFields:(id)a2 shouldIncludePreserveUntilModifiedFieldsInKnownFieldRuleEnumeration:(BOOL)a3;
- (id)newFieldTree;

@end
