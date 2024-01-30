@class CSAudioStreamHolding, NSString, CSVoiceTriggerSecondPass, CSAudioProvider;

@interface CSHearstSecondPassRequest : NSObject

@property (retain, nonatomic) NSString *firstPassDeviceID;
@property (retain, nonatomic) CSVoiceTriggerSecondPass *voiceTriggerSecondPass;
@property (nonatomic) BOOL isSecondPassRunning;
@property (nonatomic) float remoteMicVADScore;
@property (retain, nonatomic) CSAudioStreamHolding *audioStreamHolding;
@property (retain, nonatomic) CSAudioProvider *audioProvider;

- (id)initWithDeviceID:(id)a0;
- (void)setAsset:(id)a0;
- (void)start;
- (void).cxx_destruct;
- (void)dealloc;
- (void)reset;
- (void)cancelAudioStreamHold;
- (void)holdAudioStreamWithTimeout:(double)a0;

@end
