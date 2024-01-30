@class CSAudioStreamHolding, NSString, CSVoiceTriggerSecondPass, CSAudioProvider;

@interface CSHearstSecondPassRequest : NSObject

@property (retain, nonatomic) NSString *firstPassDeviceID;
@property (retain, nonatomic) CSVoiceTriggerSecondPass *voiceTriggerSecondPass;
@property (nonatomic) BOOL isSecondPassRunning;
@property (nonatomic) float remoteMicVADScore;
@property (retain, nonatomic) CSAudioStreamHolding *audioStreamHolding;
@property (retain, nonatomic) CSAudioProvider *audioProvider;

- (void)setAsset:(id)a0;
- (void).cxx_destruct;
- (void)reset;
- (void)dealloc;
- (id)initWithDeviceID:(id)a0;
- (void)start;
- (void)holdAudioStreamWithTimeout:(double)a0;
- (void)cancelAudioStreamHold;

@end
