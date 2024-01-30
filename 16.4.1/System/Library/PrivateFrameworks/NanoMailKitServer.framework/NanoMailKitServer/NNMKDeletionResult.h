@class NSArray, NNMKProtoMessageDeletions;

@interface NNMKDeletionResult : NSObject

@property (retain, nonatomic) NNMKProtoMessageDeletions *protectedProtobuf;
@property (retain, nonatomic) NNMKProtoMessageDeletions *unprotectedNotificationProtobuf;
@property (retain, nonatomic) NNMKProtoMessageDeletions *unprotectedDefaultProtobuf;
@property (retain, nonatomic) NSArray *protectedMessageIds;
@property (retain, nonatomic) NSArray *unprotectedNotificationMessageIds;
@property (retain, nonatomic) NSArray *unprotectedDefaultMessageIds;

- (void).cxx_destruct;

@end
