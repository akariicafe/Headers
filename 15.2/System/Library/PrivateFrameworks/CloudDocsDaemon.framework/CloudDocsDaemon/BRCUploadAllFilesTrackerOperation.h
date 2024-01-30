@class NSString, BRCAccountSession, NSMutableDictionary, NSMutableArray;

@interface BRCUploadAllFilesTrackerOperation : _BRCFrameworkOperation <BRCAllItemsDidUploadTracker, BRCOperationSubclass> {
    BRCAccountSession *_session;
    NSMutableArray *_zonesStillUploading;
    NSMutableArray *_hiddenZoneWithError;
    NSMutableDictionary *_perContainerIDError;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)main;
- (void).cxx_destruct;
- (BOOL)shouldRetryForError:(id)a0;
- (void)cancel;
- (void)clientZone:(id)a0 didFinishUploadingAllItemsWithError:(id)a1;
- (id)initWithSession:(id)a0 appLibraries:(id)a1;

@end
