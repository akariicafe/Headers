@class NSString, NSURL, NSNumber;

@interface UNNotificationSound : NSObject <NSMutableCopying, NSCopying, NSSecureCoding>

@property (class, readonly, copy, nonatomic) UNNotificationSound *defaultSystemSound;
@property (class, readonly, copy, nonatomic) UNNotificationSound *defaultSound;
@property (class, readonly, copy, nonatomic) UNNotificationSound *defaultCriticalSound;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long alertType;
@property (readonly, copy, nonatomic) NSString *alertTopic;
@property (readonly, copy, nonatomic) NSString *audioCategory;
@property (readonly, copy, nonatomic) NSNumber *audioVolume;
@property (readonly, nonatomic, getter=isCritical) BOOL critical;
@property (readonly, nonatomic) double maximumDuration;
@property (readonly, nonatomic) BOOL shouldIgnoreRingerSwitch;
@property (readonly, nonatomic) BOOL shouldRepeat;
@property (readonly, copy, nonatomic) NSString *toneFileName;
@property (readonly, copy, nonatomic) NSURL *toneFileURL;
@property (readonly, copy, nonatomic) NSString *toneIdentifier;
@property (readonly, nonatomic) unsigned long long toneMediaLibraryItemIdentifier;
@property (readonly, copy, nonatomic) NSString *vibrationIdentifier;
@property (readonly, copy, nonatomic) NSURL *vibrationPatternFileURL;

+ (id)soundWithAlertType:(long long)a0;
+ (id)soundNamed:(id)a0;
+ (id)_soundWithAlertType:(long long)a0 audioVolume:(id)a1 critical:(BOOL)a2 toneFileName:(id)a3;
+ (id)defaultCriticalSoundWithAudioVolume:(float)a0;
+ (id)criticalSoundNamed:(id)a0;
+ (id)criticalSoundNamed:(id)a0 withAudioVolume:(float)a1;

- (id)_initWithAlertType:(long long)a0 alertTopic:(id)a1 audioCategory:(id)a2 audioVolume:(id)a3 critical:(BOOL)a4 maximumDuration:(double)a5 shouldIgnoreRingerSwitch:(BOOL)a6 shouldRepeat:(BOOL)a7 toneFileName:(id)a8 toneFileURL:(id)a9 toneIdentifier:(id)a10 toneMediaLibraryItemIdentifier:(unsigned long long)a11 vibrationIdentifier:(id)a12 vibrationPatternFileURL:(id)a13;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
