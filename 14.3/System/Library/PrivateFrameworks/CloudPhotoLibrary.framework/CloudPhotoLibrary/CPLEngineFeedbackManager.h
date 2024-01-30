@class CPLEngineLibrary, NSArray, NSURL, NSDate, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, CPLEngineTransportSendFeedbackTask;

@interface CPLEngineFeedbackManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    id<CPLEngineTransportSendFeedbackTask> _sendTask;
    NSMutableArray *_messagesToSend;
    NSArray *_messagesSending;
    NSDate *_lastAttemptDate;
    NSURL *_feedbackMessagesURL;
    BOOL _opened;
    BOOL _closed;
    BOOL _deactivated;
}

@property (readonly, weak, nonatomic) CPLEngineLibrary *engineLibrary;

- (void)_save;
- (id)componentName;
- (void)openWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)reportSetting:(id)a0 hasBeenSetToValue:(id)a1;
- (void)_load;
- (void)reportMiscInformation:(id)a0;
- (void)getStatusWithCompletionHandler:(id /* block */)a0;
- (void)closeAndDeactivate:(BOOL)a0 completionHandler:(id /* block */)a1;
- (id)initWithEngineLibrary:(id)a0;
- (void)_appendMessage:(id)a0;
- (void)_appendMessages:(id)a0;
- (void)_reallySendFeedbackToServer;
- (void)_sendFeedbackToServerIfNecessary;
- (void)sendFeedbackToServerIfNecessary;
- (void)reportMessage:(id)a0;
- (void)reportMessages:(id)a0;
- (void)reportResetType:(id)a0 reason:(id)a1 uuid:(id)a2;
- (void)reportEndOfResetWithUUID:(id)a0 reason:(id)a1;
- (void)reportFetchChangesRewindToFeatureVersion:(unsigned long long)a0;

@end
