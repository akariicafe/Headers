@interface _MFMailMessageLibraryStatistics : NSObject

@property (nonatomic) double start;
@property (nonatomic) double duration;
@property (nonatomic) BOOL protectedDataAvailable;
@property (nonatomic) unsigned long long messages;
@property (nonatomic) unsigned long long protectedMessages;
@property (nonatomic) unsigned long long messageData;
@property (nonatomic) unsigned long long protectedMessageData;
@property (nonatomic) unsigned long long messagesDeleted;
@property (nonatomic) unsigned long long messageDataDeleted;
@property (nonatomic) unsigned long long messagesMarkedAsJournaled;
@property (nonatomic) unsigned long long mailboxesNeedingReconcilication;

@end
