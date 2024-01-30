@class NSString, BRCAccountSession, NSURL, BRCNotificationPipe, brc_task_tracker;

@interface BRCEvictItemOperation : _BRCFrameworkOperation <BRItemNotificationReceiving, BRCOperationSubclass> {
    BRCAccountSession *_session;
    struct { unsigned long long sectionID; char *function; int line; } _section;
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

- (void)main;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (void)cancel;
- (BOOL)shouldRetryForError:(id)a0;
- (oneway void)invalidate;
- (void).cxx_destruct;
- (void)receiveProgressUpdates:(id)a0 reply:(id /* block */)a1;
- (void)receiveUpdates:(id)a0 logicalExtensions:(id)a1 physicalExtensions:(id)a2 reply:(id /* block */)a3;
- (id)initWithSession:(id)a0 url:(id)a1;

@end
