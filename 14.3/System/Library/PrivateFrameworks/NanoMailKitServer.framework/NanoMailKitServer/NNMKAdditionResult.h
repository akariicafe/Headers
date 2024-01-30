@class NSMutableArray, NNMKProtoMessageAdditions;

@interface NNMKAdditionResult : NSObject

@property (retain, nonatomic) NNMKProtoMessageAdditions *protoMessagesWithNotificationPriority;
@property (retain, nonatomic) NNMKProtoMessageAdditions *protoMessagesWithDefaultPriority;
@property (retain, nonatomic) NSMutableArray *messageIdsWithNotificationPriority;
@property (retain, nonatomic) NSMutableArray *messageIdsWithDefaultPriority;
@property (nonatomic) BOOL receivedOldMessages;
@property (nonatomic) unsigned long long resendInterval;

- (void).cxx_destruct;

@end
