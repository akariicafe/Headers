@class NSString, NSMutableDictionary;

@interface HDAttachmentStoreServer : HDStandardTaskServer <HKAttachmentStoreServerInterface> {
    NSMutableDictionary *_openReadersByAttachment;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)requiredEntitlements;
+ (id)taskIdentifier;

- (id)remoteInterface;
- (void)connectionInvalidated;
- (id)exportedInterface;
- (void).cxx_destruct;
- (void)remote_streamDataForAttachment:(id)a0;
- (void)remote_addAttachmentWithName:(id)a0 contentTypeIdentifier:(id)a1 fileHandle:(id)a2 toObjectWithIdentifier:(id)a3 schemaIdentifier:(id)a4 attachmentMetadata:(id)a5 referenceMetadata:(id)a6 completion:(id /* block */)a7;
- (void)remote_addReferenceWithAttachment:(id)a0 toObjectWithIdentifier:(id)a1 schemaIdentifier:(id)a2 metadata:(id)a3 completion:(id /* block */)a4;
- (void)remote_attachmentReferencesForObjectIdentifier:(id)a0 schemaIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)remote_getDataChunkForAttachment:(id)a0 chunkSize:(unsigned long long)a1 offset:(unsigned long long)a2 completion:(id /* block */)a3;
- (void)remote_removeAllReferencesWithAttachmentIdentifier:(id)a0 objectIdentifier:(id)a1 schemaIdentifier:(id)a2 completion:(id /* block */)a3;

@end
