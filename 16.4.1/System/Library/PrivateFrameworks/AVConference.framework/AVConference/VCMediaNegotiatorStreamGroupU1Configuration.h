@class NSArray, NSSet, NSDictionary, VCVideoRuleCollections;

@interface VCMediaNegotiatorStreamGroupU1Configuration : NSObject <NSCopying>

@property (nonatomic) unsigned int ssrc;
@property (retain, nonatomic) NSArray *payloadPreference;
@property (nonatomic) BOOL allowAudioRecording;
@property (retain, nonatomic) NSSet *audioPayloads;
@property (retain, nonatomic) VCVideoRuleCollections *videoRuleCollections;
@property (retain, nonatomic) NSDictionary *videoFeatureStrings;
@property (retain, nonatomic) NSArray *videoPayloads;
@property (retain, nonatomic) NSArray *videoParameterSet;
@property (nonatomic) unsigned int screenPixelCount;

+ (id)negotiatedAudioSettingsForGroupID:(unsigned int)a0 localU1Config:(id)a1 remoteU1Config:(id)a2;
+ (id)negotiatedVideoSettingsForGroupID:(unsigned int)a0 localU1Config:(id)a1 remoteU1Config:(id)a2;
+ (id)negotiatedCameraSettingsBetweenLocalU1Config:(id)a0 remoteU1Config:(id)a1;
+ (id)negotiatedMicrophoneSettingsBetweenLocalU1Config:(id)a0 remoteU1Config:(id)a1;
+ (id)negotiatedScreenSettingsBetweenLocalU1Config:(id)a0 remoteU1Config:(id)a1;
+ (id)negotiatedSystemAudioSettingsBetweenLocalU1Config:(id)a0 remoteU1Config:(id)a1;
+ (BOOL)ssrcForStreamGroup:(unsigned int)a0 localConfig:(id)a1 ssrc:(unsigned int *)a2;
+ (void)updateCameraU1Config:(id)a0 localConfig:(id)a1;
+ (BOOL)updateCommonNegotiatedVideoSettings:(id)a0 localU1Config:(id)a1 remoteU1Config:(id)a2;
+ (void)updateScreenU1Config:(id)a0 localConfig:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initStreamGroupU1ConfigForGroupId:(unsigned int)a0 withLocalConfig:(id)a1;
- (id)initWithSSRC:(unsigned int)a0;

@end
