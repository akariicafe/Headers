@class NSString;

@interface MNUserOptions : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long drivingVoiceGuidanceLevel;
@property (nonatomic) unsigned long long walkingVoiceGuidanceLevel;
@property (nonatomic) unsigned long long cyclingVoiceGuidanceLevel;
@property (nonatomic) unsigned long long distanceUnits;
@property (nonatomic) BOOL useHFP;
@property (nonatomic) BOOL pauseSpokenAudio;
@property (nonatomic) BOOL chimeBeforeInstruction;
@property (nonatomic) BOOL muteSpeechOverride;
@property (nonatomic) BOOL speechEnabled;
@property (nonatomic) unsigned long long maxAlternateRoutesCount;
@property (readonly, nonatomic) NSString *voiceLanguage;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)changeTransportType:(int)a0 toVoiceGuidanceLevel:(unsigned long long)a1;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (unsigned long long)guidanceLevelForTransportType:(int)a0;

@end
