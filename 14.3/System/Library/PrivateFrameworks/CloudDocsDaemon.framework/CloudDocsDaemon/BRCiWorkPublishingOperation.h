@class BRCItemID, NSString, NSArray, NSNumber, BRCServerZone;

@interface BRCiWorkPublishingOperation : _BRCOperation <BRCOperationSubclass> {
    BRCItemID *_itemID;
    NSArray *_recordIDs;
    BOOL _forPublish;
    BOOL _readonly;
    NSNumber *_sharingInfo;
    BRCServerZone *_serverZone;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)main;
- (BOOL)shouldRetryForError:(id)a0;
- (id)createActivity;
- (id)initWithDocumentItem:(id)a0 forPublish:(BOOL)a1 readonly:(BOOL)a2;
- (void)_updateItemAfterShareCompleted;

@end
