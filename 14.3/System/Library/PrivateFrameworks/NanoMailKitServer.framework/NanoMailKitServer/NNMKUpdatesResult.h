@class NSArray, NNMKProtoMessageStatusUpdates;

@interface NNMKUpdatesResult : NSObject

@property (retain, nonatomic) NNMKProtoMessageStatusUpdates *protoMessageUpdatesWithNotificationPriority;
@property (retain, nonatomic) NNMKProtoMessageStatusUpdates *protoMessageUpdatesWithDefaultPriority;
@property (retain, nonatomic) NNMKProtoMessageStatusUpdates *protoMessageUpdatesWithDefaultPriorityAndProtectedChannel;
@property (retain, nonatomic) NSArray *messageIdsWithNotificationPriority;
@property (retain, nonatomic) NSArray *messageIdsWithDefaultPriority;
@property (retain, nonatomic) NSArray *messageIdsWithDefaultPriorityAndProtectedChannel;
@property (retain, nonatomic) NSArray *messagesToAdd;
@property (retain, nonatomic) NSArray *messageIdsToDelete;

- (void).cxx_destruct;

@end
