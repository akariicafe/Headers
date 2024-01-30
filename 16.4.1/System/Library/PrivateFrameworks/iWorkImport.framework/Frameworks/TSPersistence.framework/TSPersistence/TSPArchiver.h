@class NSUUID, NSHashTable, NSSet, _TtC13TSPersistence23TSPMutableIdentifierSet, TSPReferenceOrderedSet, NSObject, NSMutableSet, TSPObject, TSPUnknownContentSnapshot;
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
@property (readonly, nonatomic) _TtC13TSPersistence23TSPMutableIdentifierSet *aggregatedCountedDataReferences;
@property (nonatomic) unsigned long long messageVersion;
@property (readonly, nonatomic) BOOL shouldSaveAlternates;

- (void)cleanup;
- (id)initWithObject:(id)a0;
- (void)archive;
- (void)serialize;
- (void).cxx_destruct;
- (void)fail;
- (void)requiresDocumentReadVersion:(unsigned long long)a0 writeVersion:(unsigned long long)a1;
- (void)requiresDocumentReadVersion:(unsigned long long)a0 writeVersion:(unsigned long long)a1 featureIdentifier:(id)a2;
- (void)requiresDocumentVersion:(unsigned long long)a0;
- (void)requiresDocumentVersion:(unsigned long long)a0 featureIdentifier:(id)a1;
- (BOOL)updateMessageInfo:(void *)a0 withArchiver:(id)a1;
- (id)addAlternateArchiverForVersion:(unsigned long long)a0 fieldPath:(const void *)a1 isDiffArchiver:(BOOL)a2 diffReadVersion:(unsigned long long)a3 message:(const struct Message { void /* function */ **x0; struct InternalMetadata { void *x0; } x1; } *)a4;
- (void)addDocumentFeatureInfoWithIdentifier:(id)a0 readVersion:(unsigned long long)a1 writeVersion:(unsigned long long)a2 validatingValues:(BOOL)a3;
- (void)aggregateReferencesFromArchiver:(id)a0;
- (id)alternateForVersion:(unsigned long long)a0;
- (BOOL)beginArchive;
- (BOOL)beginWrite;
- (id)calculateOrderedArchivableContent;
- (id)initWithObject:(id)a0 flags:(char)a1;
- (BOOL)isSavingCollaborativeDocument;
- (BOOL)isSavingDocumentAs;
- (void)validateOrderedArchivableContent:(id)a0;
- (void)willScheduleArchive;

@end
