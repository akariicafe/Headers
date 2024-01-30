@class NSString, BRCAccountSession, NSURL, BRCNotificationPipe, brc_task_tracker;

@interface BRCEvictItemOperation : _BRCFrameworkOperation <BRItemNotificationReceiving, BRCOperationSubclass> {
    BRCAccountSession *_session;
    unsigned long long _section;
    NSURL *_url;
    brc_task_tracker *_tracker;
    BRCNotificationPipe *_pipe;
    BOOL _isFinished;
}

@property (copy) id /* block */ evictionCompletionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancel;
- (void).cxx_destruct;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (void)main;
- (void)receiveUpdates:(id)a0 logicalExtensions:(id)a1 physicalExtensions:(id)a2 reply:(id /* block */)a3;
- (void)receiveProgressUpdates:(id)a0 reply:(id /* block */)a1;
- (BOOL)shouldRetryForError:(id)a0;
- (oneway void)invalidate;
- (id)initWithSession:(id)a0 url:(id)a1;

@end
