@class NSUUID, NSHashTable, NSSet, TSPReferenceOrderedSet, NSObject, NSMutableSet, TSPUnknownContentSnapshot, TSPObject;
@protocol OS_dispatch_group, OS_dispatch_data;

@interface TSPArchiver : TSPArchiverBase {
    _Atomic char _flags;
    TSPUnknownContentSnapshot *_unknownContentSnapshot;
    NSMutableSet *_featureInfos;
}

@property (readonly, nonatomic) NSUUID *objectUUID;
@property (readonly, nonatomic) TSPObject *explicitComponentRootObject;
@property (readonly, nonatomic) BOOL success;
@property (readonly, nonatomic) BOOL needsToScheduleArchive;
@property (readonly, nonatomic) NSObject<OS_dispatch_group> *archiveGroup;
@property (readonly, nonatomic) NSObject<OS_dispatch_group> *serializeGroup;
@property (readonly, nonatomic) NSObject<OS_dispatch_data> *serializedData;
@property (readonly, nonatomic) NSSet *featureInfos;
@property (readonly, nonatomic) TSPReferenceOrderedSet *aggregatedStrongReferences;
@property (readonly, nonatomic) TSPReferenceOrderedSet *aggregatedWeakReferences;
@property (readonly, nonatomic) NSHashTable *aggregatedLazyReferences;
@property (readonly, nonatomic) NSHashTable *aggregatedDataReferences;
@property (nonatomic) unsigned long long messageVersion;
@property (readonly, nonatomic) BOOL shouldSaveAlternates;

- (void)serialize;
- (void)fail;
- (void)archive;
- (void).cxx_destruct;
- (void)cleanup;
- (id)initWithObject:(id)a0;
- (void)requiresDocumentReadVersion:(unsigned long long)a0 writeVersion:(unsigned long long)a1;
- (void)requiresDocumentVersion:(unsigned long long)a0;
- (void)requiresDocumentReadVersion:(unsigned long long)a0 writeVersion:(unsigned long long)a1 featureIdentifier:(id)a2;
- (void)requiresDocumentVersion:(unsigned long long)a0 featureIdentifier:(id)a1;
- (id)addAlternateArchiverForVersion:(unsigned long long)a0 fieldPath:(const struct FieldPath { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RepeatedField<unsigned int> { int x0; int x1; union Pointer { struct Arena *x0; struct Rep *x1; } x2; } x4; int x5; } *)a1 isDiffArchiver:(BOOL)a2 diffReadVersion:(unsigned long long)a3 message:(const struct Message { void /* function */ **x0; } *)a4;
- (BOOL)isSavingDocumentAs;
- (BOOL)isSavingCollaborativeDocument;
- (id)initWithObject:(id)a0 flags:(char)a1;
- (void)addDocumentFeatureInfoWithIdentifier:(id)a0 readVersion:(unsigned long long)a1 writeVersion:(unsigned long long)a2 validatingValues:(BOOL)a3;
- (void)aggregateReferencesFromArchiver:(id)a0;
- (id)calculateOrderedArchivableContent;
- (void)validateOrderedArchivableContent:(id)a0;
- (BOOL)updateMessageInfo:(struct MessageInfo { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RepeatedField<unsigned int> { int x0; int x1; union Pointer { struct Arena *x0; struct Rep *x1; } x2; } x4; int x5; struct RepeatedPtrField<TSP::FieldInfo> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x6; struct RepeatedField<unsigned long long> { int x0; int x1; union Pointer { struct Arena *x0; struct Rep *x1; } x2; } x7; int x8; struct RepeatedField<unsigned long long> { int x0; int x1; union Pointer { struct Arena *x0; struct Rep *x1; } x2; } x9; int x10; struct RepeatedField<unsigned int> { int x0; int x1; union Pointer { struct Arena *x0; struct Rep *x1; } x2; } x11; int x12; struct RepeatedPtrField<TSP::FieldPath> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x13; struct RepeatedField<unsigned int> { int x0; int x1; union Pointer { struct Arena *x0; struct Rep *x1; } x2; } x14; int x15; struct FieldPath *x16; unsigned int x17; unsigned int x18; unsigned int x19; } *)a0 withArchiver:(id)a1;
- (id)alternateForVersion:(unsigned long long)a0;
- (void)willScheduleArchive;
- (BOOL)beginArchive;
- (BOOL)beginWrite;

@end
