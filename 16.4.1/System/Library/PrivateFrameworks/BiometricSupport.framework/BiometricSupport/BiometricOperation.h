@class BiometricKitXPCExportedClientObject;

@interface BiometricOperation : NSObject

@property (readonly, nonatomic) int type;
@property (retain, nonatomic) BiometricKitXPCExportedClientObject *client;
@property (nonatomic) int status;
@property (nonatomic) long long priority;
@property (readonly, nonatomic) unsigned int taskPausedMessage;
@property (readonly, nonatomic) unsigned int taskResumedMessage;
@property (readonly, nonatomic) unsigned int taskResumeFailedMessage;
@property (readonly, nonatomic) unsigned int cancelledMessage;

- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
