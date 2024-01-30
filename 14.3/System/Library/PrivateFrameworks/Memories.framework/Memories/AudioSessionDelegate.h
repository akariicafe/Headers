@class NSString;

@interface AudioSessionDelegate : NSObject <AVAudioSessionDelegate>

@property (nonatomic) BOOL isUsingSpeaker;
@property (nonatomic) BOOL isUsingAudioInput;
@property (nonatomic) BOOL interruptions;
@property (nonatomic) BOOL preventSessionChanges;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)sdf;
- (id)init;
- (void)dealloc;
- (BOOL)inputIsAvailable;
- (void)beginInterruption;
- (void)endInterruptionWithFlags:(unsigned long long)a0;
- (void)inputIsAvailableChanged:(BOOL)a0;
- (BOOL)becomeInactive;
- (BOOL)becomeActiveWithWantsAudioInput:(BOOL)a0;
- (void)routeDidChange;
- (void)ignoreInterruptionsMode;
- (void)normalInterruptionsMode;
- (float)volumeDBtoSlider:(float)a0;
- (float)sliderToDB:(float)a0;

@end
