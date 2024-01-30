@class NSString, TSPObject, TSPObjectContext, TSPDeepCopyObjectMap, NSDictionary, TSPComponent;

@interface TSPDeepCopyReadAssistant : NSObject <TSPDecoderReadCoordinatorDelegate> {
    TSPObjectContext *_context;
    TSPDeepCopyObjectMap *_objectMap;
    TSPObject *_cachedMetadataObject;
    NSDictionary *_cachedDataMap;
    unsigned long long _readVersion;
    TSPComponent *_component;
}

@property (readonly, nonatomic) unsigned long long fileFormatVersion;
@property (readonly, nonatomic) unsigned long long readVersion;
@property (readonly, nonatomic) BOOL hasDocumentVersionUUID;
@property (readonly, nonatomic) long long sourceType;
@property (readonly, nonatomic) BOOL isCrossDocumentPaste;
@property (readonly, nonatomic) BOOL isCrossAppPaste;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (long long)objectIdentifierForUUID:(id)a0;
- (id)cachedMetadataObject;
- (id)metadataComponent;
- (BOOL)processMetadataObject:(id)a0 error:(id *)a1;
- (id)rootObjectComponent;
- (BOOL)canResolveExternalReferences;
- (BOOL)shouldResolveExternalReferencesUsingObjectUUID;
- (id)objectUUIDForExternalReferenceToIdentifier:(long long)a0;
- (id)cachedDataForIdentifier:(long long)a0;
- (id)dataInfoForIdentifier:(long long)a0;
- (BOOL)shouldDecodeMissingDataAsRemote;
- (id)initWithContext:(id)a0 objectMap:(id)a1 cachedMetadataObject:(id)a2 cachedDataMap:(id)a3;
- (id)decodeDeepCopySerializedData:(id)a0 options:(id)a1 error:(id *)a2;

@end
