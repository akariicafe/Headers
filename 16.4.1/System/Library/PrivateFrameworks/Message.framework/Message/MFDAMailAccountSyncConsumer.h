@class NSString, NSArray, MFActivityMonitor, NSMutableData, NSMutableDictionary, NSConditionLock;
@protocol DAMailboxStreamingContentConsumer;

@interface MFDAMailAccountSyncConsumer : MFDAMailAccountConsumer <DAMailboxRequestConsumer, DAMailboxStreamingContentConsumer> {
    NSArray *_requestPairs;
    NSString *_accountID;
    MFActivityMonitor *_monitor;
    NSMutableData *_bodyData;
    BOOL _receivedFirstItem;
    BOOL _firstSyncBatch;
    int _syncKeyResets;
    int _serverErrors;
    NSMutableDictionary *_syncResponseConsumersByMessageId;
    NSConditionLock *_accountHierarchyLock;
}

@property (copy, nonatomic) NSString *tag;
@property (retain, nonatomic) id<DAMailboxStreamingContentConsumer> streamConsumer;
@property (readonly, nonatomic) BOOL moreAvailable;

- (void).cxx_destruct;
- (void)reset;
- (id)actionsConsumer;
- (void)accountHierarchyChanged:(id)a0;
- (void)consumeData:(char *)a0 length:(int)a1 format:(int)a2 mailMessage:(id)a3;
- (void)didEndStreamingForMailMessage:(id)a0;
- (void)handleSyncResponses:(id)a0;
- (id)initWithCurrentTag:(id)a0 accountID:(id)a1 requests:(id)a2;
- (id)originalThreadMonitor;
- (void)partialResultsForMailbox:(id)a0 actions:(id)a1 responses:(id)a2 percentComplete:(double)a3 moreAvailable:(BOOL)a4;
- (BOOL)refreshFolderHierarchyAndWait:(unsigned long long)a0;
- (void)resultsForMailbox:(id)a0 newTag:(id)a1 actions:(id)a2 responses:(id)a3 percentComplete:(double)a4 moreAvailable:(BOOL)a5 sentBytesCount:(unsigned long long)a6 receivedBytesCount:(unsigned long long)a7;
- (BOOL)shouldBeginStreamingForMailMessage:(id)a0 format:(int)a1;
- (void)taskFailed:(id)a0 statusCode:(long long)a1 error:(id)a2;

@end
