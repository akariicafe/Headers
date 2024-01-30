@protocol GTBulkDataService;

@interface GTBulkDataServiceXPCDispatcher : GTXPCDispatcher <GTBulkDataServiceXPCDispatcher> {
    id<GTBulkDataService> _service;
}

- (void).cxx_destruct;
- (void)downloadData_chunkSize_chunkHandler_:(id)a0 replyConnection:(id)a1;
- (id)initWithService:(id)a0 properties:(id)a1;
- (void)newUploadOfSize_:(id)a0 replyConnection:(id)a1;
- (void)uploadChunk_forHandle_:(id)a0 replyConnection:(id)a1;

@end
