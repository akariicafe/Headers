@protocol GTFileWriterService;

@interface GTFileWriterServiceXPCDispatcher : GTXPCDispatcher <GTFileWriterServiceXPCDispatcher> {
    id<GTFileWriterService> _service;
}

- (void).cxx_destruct;
- (void)finishSession_:(id)a0 replyConnection:(id)a1;
- (void)abortSession_:(id)a0 replyConnection:(id)a1;
- (void)beginTransferSessionWithFileEntries_basePath_device_config_sessionID_completionHandler_:(id)a0 replyConnection:(id)a1;
- (id)initWithService:(id)a0 properties:(id)a1;
- (void)initiateTransfer_basePath_device_config_completionHandler_:(id)a0 replyConnection:(id)a1;
- (void)writeFileChunks_withData_session_:(id)a0 replyConnection:(id)a1;

@end
