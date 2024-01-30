@class _DPBitValueRecorder;

@interface IMDPLogsCollector : NSObject

@property (retain, nonatomic) _DPBitValueRecorder *privatizedUIInteractionRecorder;
@property (retain, nonatomic) _DPBitValueRecorder *privatizedImageReceivedRecorder;
@property (retain, nonatomic) _DPBitValueRecorder *privatizedImageSentRecorder;

+ (id)sharedInstance;
+ (id)_primaryAccountCountryCode;

- (id)init;
- (void).cxx_destruct;
- (BOOL)logPrivatizedImageSentEvent:(BOOL)a0;
- (BOOL)logPrivatizedUIInteractionEvent:(unsigned long long)a0;
- (BOOL)logPrivatizedImageReceivedEvent:(BOOL)a0;

@end
