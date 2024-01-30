@class IMDMessageStore, NSString, NSTimer, NSMutableSet, IMTimingCollection;

@interface IMDMessageFromStorageController : NSObject

@property (retain, nonatomic) IMDMessageStore *messageStore;
@property (retain, nonatomic) NSString *serviceName;
@property (retain, nonatomic) NSTimer *storageTimer;
@property (retain, nonatomic) NSMutableSet *messagesReceivedDuringStorage;
@property (retain, nonatomic) IMTimingCollection *timingComingBackFromStorage;
@property (nonatomic) unsigned long long messagesProcessedComingBackFromStorage;
@property (retain, nonatomic) id _broadcasterForTesting;
@property (nonatomic) double storageTimerInterval;
@property (nonatomic) double lastMessageStorageTimerInterval;
@property (nonatomic) unsigned long long pendingReadReceiptFromStorageCount;

+ (id)SMSStorageController;
+ (id)iMessageStorageController;

- (void)decrementPendingReadReceiptFromStorageCount;
- (void)noteLastItemProcessedWithError:(unsigned long long)a0;
- (void)_submitStorageMetricsWithError:(unsigned long long)a0;
- (void)noteSuppressedMessageUpdate:(id)a0;
- (void)noteLastItemProcessed;
- (BOOL)isAwaitingStorageTimer;
- (void)_storageTimerFired;
- (void)noteItemFromStorage:(id)a0;
- (id)initWithMessageStore:(id)a0;
- (void)incrementPendingReadReceiptFromStorageCount;
- (void).cxx_destruct;
- (void)noteLastItemFromStorage:(id)a0;
- (void)_postMessagesFromStorage:(id)a0;
- (void)_updateStorageTimerWithInterval:(double)a0;
- (id)broadcaster;

@end
