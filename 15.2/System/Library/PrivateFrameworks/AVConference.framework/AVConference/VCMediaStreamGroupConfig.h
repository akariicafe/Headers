@class NSObject, NSString, VCNetworkFeedbackController, NSMutableArray, VCSecurityKeyManager;
@protocol VCMediaStreamGroupDelegate, OS_dispatch_queue, VCMediaCaptureController;

@interface VCMediaStreamGroupConfig : NSObject {
    unsigned int syncGroupID;
    struct tagVCJBTargetEstimatorSynchronizer { } *_jbTargetEstimatorSynchronizer;
}

@property (nonatomic) unsigned int streamGroupID;
@property (nonatomic) long long streamToken;
@property (nonatomic) unsigned int mediaType;
@property (nonatomic) unsigned int mediaSubtype;
@property (nonatomic) unsigned int syncGroupID;
@property (retain, nonatomic) id<VCMediaStreamGroupDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (retain, nonatomic) id<VCMediaCaptureController> captureController;
@property (readonly, nonatomic) NSMutableArray *mediaStreamInfoArray;
@property (retain, nonatomic) VCSecurityKeyManager *securityKeyManager;
@property (retain, nonatomic) NSString *participantUUID;
@property (nonatomic) unsigned long long idsParticipantID;
@property (nonatomic) int captureSource;
@property (nonatomic) struct tagVCJBTargetEstimatorSynchronizer { } *jbTargetEstimatorSynchronizer;
@property (retain, nonatomic) NSString *sessionUUID;
@property (retain, nonatomic) VCNetworkFeedbackController *networkFeedbackController;

- (id)init;
- (void)dealloc;
- (BOOL)addMediaStreamInfo:(id)a0;

@end
