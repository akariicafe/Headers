@class NSString, TSPObjectContext, TSPDeepCopyObjectMap;

@interface TSPDeepCopyWriteAssistant : NSObject <TSPEncoderWriteCoordinatorDelegate> {
    TSPObjectContext *_context;
    TSPDeepCopyObjectMap *_objectMap;
    BOOL _resetObjectUUIDs;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (BOOL)skipMetadataObjectSerialization;
- (long long)componentWriterMode;
- (id)createMetadataForRootObject:(id)a0 readVersion:(unsigned long long)a1 dataArchiver:(id)a2 archivedObjects:(id)a3 componentObjectUUIDMap:(id)a4 externalReferences:(id)a5 weakExternalReferences:(id)a6 lazyReferences:(id)a7 dataReferences:(id)a8 error:(id *)a9;
- (void)encodeDeepCopyOfObject:(id)a0 options:(id)a1 completion:(id /* block */)a2;
- (id)initWithContext:(id)a0 objectMap:(id)a1;
- (unsigned long long)objectTargetType;

@end
