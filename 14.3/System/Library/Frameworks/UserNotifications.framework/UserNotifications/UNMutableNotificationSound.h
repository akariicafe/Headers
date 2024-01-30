@class NSString, NSNumber, NSURL;

@interface UNMutableNotificationSound : UNNotificationSound

@property (copy, nonatomic) NSString *alertTopic;
@property (copy, nonatomic) NSString *audioCategory;
@property (copy, nonatomic) NSNumber *audioVolume;
@property (nonatomic, getter=isCritical) BOOL critical;
@property (nonatomic) double maximumDuration;
@property (nonatomic) BOOL shouldIgnoreRingerSwitch;
@property (nonatomic) BOOL shouldRepeat;
@property (copy, nonatomic) NSString *toneFileName;
@property (copy, nonatomic) NSURL *toneFileURL;
@property (copy, nonatomic) NSString *toneIdentifier;
@property (nonatomic) unsigned long long toneMediaLibraryItemIdentifier;
@property (copy, nonatomic) NSString *vibrationIdentifier;
@property (copy, nonatomic) NSURL *vibrationPatternFileURL;

- (void)setToneFileURL:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setVibrationIdentifier:(id)a0;
- (void)setVibrationPatternFileURL:(id)a0;
- (void)setMaximumDuration:(double)a0;
- (void)setAudioVolume:(id)a0;
- (void)setShouldRepeat:(BOOL)a0;
- (void)setShouldIgnoreRingerSwitch:(BOOL)a0;
- (void)setToneIdentifier:(id)a0;
- (void)setAlertTopic:(id)a0;
- (void)setAudioCategory:(id)a0;
- (void)setCritical:(BOOL)a0;
- (void)setToneMediaLibraryItemIdentifier:(unsigned long long)a0;
- (void)setToneFileName:(id)a0;

@end
