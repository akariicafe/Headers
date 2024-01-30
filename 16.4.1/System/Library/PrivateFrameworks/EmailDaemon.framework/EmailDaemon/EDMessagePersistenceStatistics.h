@interface EDMessagePersistenceStatistics : NSObject

@property (nonatomic) double start;
@property (nonatomic) double duration;
@property (nonatomic) unsigned long long messages;
@property (nonatomic) unsigned long long messageData;
@property (nonatomic) unsigned long long messagesDeleted;
@property (nonatomic) unsigned long long messageDataDeleted;
@property (nonatomic) unsigned long long indexableMessages;
@property (nonatomic) unsigned long long messagesIndexed;
@property (nonatomic) unsigned long long messagesToIndex;
@property (nonatomic) unsigned long long indexableAttachments;
@property (nonatomic) unsigned long long attachmentsIndexed;
@property (nonatomic) unsigned long long attachmentsToIndex;

@end
