@class NSObject, NSMutableDictionary, NSString, NSError, BRCServerZone, NSMutableArray;
@protocol OS_dispatch_group, OS_dispatch_source;

@interface BRCFetchRecordSubResourcesOperation : _BRCOperation <BRCOperationSubclass> {
    BRCServerZone *_serverZone;
    NSMutableArray *_recordsWithXattrsToFetch;
    NSObject<OS_dispatch_group> *_recordsBeingFetchedGroup;
    NSObject<OS_dispatch_group> *_operationGroup;
    NSObject<OS_dispatch_source> *_xattrFetchingSource;
    BOOL _isDoneFetchingRecords;
}

@property (readonly, nonatomic) NSMutableDictionary *recordsByID;
@property (readonly, nonatomic) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancel;
- (void)addRecord:(id)a0;
- (void).cxx_destruct;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (void)stop;
- (void)main;
- (void)removeAllRecords;
- (BOOL)shouldRetryForError:(id)a0;
- (id)createActivity;
- (void)stopWithError:(id)a0;
- (id)initWithServerZone:(id)a0;
- (void)startWithParentOperation:(id)a0;
- (void)removeRecordByID:(id)a0;
- (void)waitUntilRecordsAreFetched;
- (void)_scheduleXattrFetch;

@end
