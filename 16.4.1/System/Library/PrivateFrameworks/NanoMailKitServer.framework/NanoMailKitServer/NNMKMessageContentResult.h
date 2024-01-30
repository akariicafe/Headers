@class NNMKProtoMessageContentSync;

@interface NNMKMessageContentResult : NSObject

@property (retain, nonatomic) NNMKProtoMessageContentSync *protoMessageContentSync;
@property (nonatomic) unsigned long long resendInterval;
@property (nonatomic) long long compressedTextDataLength;
@property (nonatomic) BOOL isContentCompletelySynced;
@property (nonatomic) BOOL isNotificationPriority;
@property (nonatomic) BOOL isUserRequest;
@property (nonatomic) BOOL alreadySyncedWithCurrentPriority;
@property (nonatomic) BOOL messageDoesNotExist;

- (void).cxx_destruct;

@end
