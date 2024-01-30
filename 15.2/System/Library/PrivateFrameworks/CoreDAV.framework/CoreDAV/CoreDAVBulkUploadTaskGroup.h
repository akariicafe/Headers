@class NSString, NSURL, NSMutableDictionary;

@interface CoreDAVBulkUploadTaskGroup : CoreDAVTaskGroup <CoreDAVTaskDelegate> {
    NSMutableDictionary *_remainingUUIDsToAddActions;
    NSMutableDictionary *_remainingHREFsToModDeleteActions;
}

@property (retain, nonatomic) NSString *nextCTag;
@property (nonatomic) unsigned long long multiPutBatchMaxNumResources;
@property (nonatomic) unsigned long long multiPutBatchMaxSize;
@property (readonly, nonatomic) NSURL *folderURL;
@property (readonly, nonatomic) BOOL validCTag;
@property (readonly, nonatomic) NSMutableDictionary *uuidToHREF;
@property (readonly, nonatomic) NSMutableDictionary *hrefToETag;
@property (readonly, nonatomic) NSMutableDictionary *uuidToStatus;
@property (readonly, nonatomic) NSMutableDictionary *hrefToStatus;
@property (readonly, nonatomic) NSMutableDictionary *uuidToErrorItems;
@property (readonly, nonatomic) NSMutableDictionary *hrefToErrorItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)task:(id)a0 didFinishWithError:(id)a1;
- (void)startTaskGroup;
- (void).cxx_destruct;
- (void)_sendNextBatch;
- (void)syncAway;
- (Class)multiPutTaskClass;
- (id)initWithFolderURL:(id)a0 checkCTag:(id)a1 uuidsToAddActions:(id)a2 hrefsToModDeleteActions:(id)a3 context:(id)a4 accountInfoProvider:(id)a5 taskManager:(id)a6;

@end
