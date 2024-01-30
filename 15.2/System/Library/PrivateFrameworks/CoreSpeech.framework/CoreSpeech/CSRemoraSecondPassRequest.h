@class CSAudioStreamHolding, NSString, CSVoiceTriggerSecondPass, CSAudioProvider, CSAsset;

@interface CSRemoraSecondPassRequest : NSObject

@property (retain, nonatomic) NSString *firstPassDeviceID;
@property (retain, nonatomic) CSVoiceTriggerSecondPass *voiceTriggerSecondPass;
@property (nonatomic) BOOL isSecondPassRunning;
@property (retain, nonatomic) CSAudioStreamHolding *audioStreamHolding;
@property (retain, nonatomic) CSAudioProvider *audioProvider;
@property (retain, nonatomic) CSAsset *currentAsset;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL isCancelled;
@property (nonatomic) float goodnessScore;
@property (nonatomic) double firstPassTriggerEndTime;

- (void)cancelRequest;
- (id)initWithDeviceID:(id)a0;
- (void)setAsset:(id)a0;
- (void)start;
- (void).cxx_destruct;
- (void)dealloc;
- (void)reset;
- (id)_secondPassStateQueue;
- (id)_secondPassWorkQueue;
- (void)cancelAudioStreamHold;
- (void)holdAudioStreamWithTimeout:(double)a0;

@end
