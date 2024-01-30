@class TSPFinalizeHandlerQueue, NSString, TSPComponent, TSPObjectContext, TSPDocumentLoadValidationPolicy, NSObject, NSMapTable;
@protocol TSPDecoderReadCoordinatorDelegate, TSPDecoder, OS_dispatch_queue;

@interface TSPDecoderReadCoordinator : TSPReadCoordinatorBase <TSPReadCoordinator> {
    id<TSPDecoder> _decoder;
    TSPObjectContext *_context;
    TSPFinalizeHandlerQueue *_finalizeHandlerQueue;
    id<TSPDecoderReadCoordinatorDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_dataQueue;
    TSPComponent *_rootObjectComponent;
    NSMapTable *_objects;
}

@property (readonly, nonatomic) BOOL isReadingFromDocument;
@property (readonly, nonatomic) TSPDocumentLoadValidationPolicy *documentLoadValidationPolicy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)objectForIdentifier:(long long)a0;
- (unsigned int)sourceType;
- (id)context;
- (id)init;
- (unsigned char)packageIdentifier;
- (void).cxx_destruct;
- (unsigned long long)readVersion;
- (unsigned long long)fileFormatVersion;
- (BOOL)isCrossAppPaste;
- (BOOL)readLazyReference:(id)a0 object:(id *)a1 error:(id *)a2;
- (void)didUpdateLazyReferenceDelegate:(id)a0;
- (id)externalObjectForIdentifier:(long long)a0 componentIdentifier:(long long)a1 isReadFinished:(BOOL)a2;
- (id)baseObjectUUID;
- (void)didReferenceExternalObject:(id)a0 withIdentifier:(long long)a1;
- (BOOL)endReading;
- (BOOL)hasDocumentVersionUUID;
- (id)initWithDecoder:(id)a0 context:(id)a1 finalizeHandlerQueue:(id)a2 delegate:(id)a3;
- (BOOL)isCrossDocumentPaste;
- (BOOL)isExternalLazyReference:(id)a0;
- (void)readComponent:(id)a0 completionQueue:(id)a1 completion:(id /* block */)a2;
- (void)readRootObjectWithCompletionQueue:(id)a0 completion:(id /* block */)a1;
- (void)reader:(id)a0 didFindExternalReferenceToObjectIdentifier:(long long)a1 componentIdentifier:(long long)a2 isWeak:(BOOL)a3 allowUnknownObject:(BOOL)a4 objectClass:(Class)a5 objectProtocol:(id)a6 fromParentObject:(id)a7 completion:(id /* block */)a8;
- (void)reader:(id)a0 didFindExternalRepeatedReference:(id)a1 isWeak:(BOOL)a2 allowUnknownObject:(BOOL)a3 objectClass:(Class)a4 objectProtocol:(id)a5 fromParentObject:(id)a6 completion:(id /* block */)a7;
- (void)reader:(id)a0 didReadLazyReference:(id)a1;
- (void)reader:(id)a0 didUnarchiveObject:(id)a1;
- (id)reader:(id)a0 wantsDataForIdentifier:(long long)a1;
- (long long)reader:(id)a0 wantsObjectIdentifierForUUID:(id)a1;
- (id)unarchivedObjectForIdentifier:(long long)a0 isReadFinished:(BOOL)a1;

@end
