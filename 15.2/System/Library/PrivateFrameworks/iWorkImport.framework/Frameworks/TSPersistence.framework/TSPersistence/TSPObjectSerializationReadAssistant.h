@class NSString, NSDictionary, TSPObjectContext, NSURL, TSPComponent;

@interface TSPObjectSerializationReadAssistant : NSObject <TSPDecoderReadCoordinatorDelegate> {
    TSPObjectContext *_context;
    NSURL *_resourcesFolderURL;
    NSDictionary *_identifierToResourceNameDictionary;
    unsigned long long _readVersion;
    NSDictionary *_identifierToObjectUUIDDictionary;
    NSDictionary *_dataInfos;
    TSPComponent *_rootObjectComponent;
    BOOL _deserializeAsPasteboard;
    BOOL _resetObjectUUIDs;
    BOOL _shouldDecodeMissingDataAsRemote;
}

@property (nonatomic) BOOL isCrossDocumentPaste;
@property (nonatomic) BOOL isCrossAppPaste;
@property (readonly, nonatomic) unsigned long long fileFormatVersion;
@property (readonly, nonatomic) unsigned long long readVersion;
@property (readonly, nonatomic) BOOL hasDocumentVersionUUID;
@property (readonly, nonatomic) unsigned int sourceType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (id)init;
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
- (BOOL)isDecodingTransientObject;
- (id)decodeObjectWithData:(id)a0 packageURL:(id)a1 options:(id)a2 error:(id *)a3;
- (id)resourceURLForIdentifier:(long long)a0;

@end
