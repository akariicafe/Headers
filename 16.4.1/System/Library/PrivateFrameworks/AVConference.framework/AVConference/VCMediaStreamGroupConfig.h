@class NSString, NSArray, NSMutableDictionary, VCSecurityKeyManager, NSDictionary, NSObject, NSMutableArray, VCNetworkFeedbackController;
@protocol VCMediaStreamGroupDelegate, OS_dispatch_queue, VCMediaCaptureController;

@interface VCMediaStreamGroupConfig : NSObject {
    unsigned int syncGroupID;
    struct tagVCJBTargetEstimatorSynchronizer { } *_jbTargetEstimatorSynchronizer;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _mutex;
    BOOL _shouldSetupStreams;
}

@property (readonly, nonatomic) NSArray *mediaStreams;
@property (readonly, nonatomic) NSDictionary *streamIDToMediaStreamMap;
@property (readonly, nonatomic) NSMutableDictionary *groupEntries;
@property (readonly, nonatomic) BOOL hasRepairedStreams;
@property (readonly, nonatomic) unsigned int rtpTimestampRate;
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

- (void)lock;
- (void)unlock;
- (void)dealloc;
- (id)init;
- (BOOL)addMediaStreamInfo:(id)a0;
- (void)setupStreams;

@end
