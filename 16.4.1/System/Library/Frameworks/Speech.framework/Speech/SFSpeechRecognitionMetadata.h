@class SFVoiceAnalytics, NSString;

@interface SFSpeechRecognitionMetadata : NSObject <SRSampling, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double speakingRate;
@property (readonly, nonatomic) double averagePauseDuration;
@property (readonly, nonatomic) double speechStartTimestamp;
@property (readonly, nonatomic) double speechDuration;
@property (readonly, nonatomic) SFVoiceAnalytics *voiceAnalytics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)binarySampleRepresentation;
- (id)initWithBinarySampleRepresentation:(id)a0 metadata:(id)a1 timestamp:(double)a2;
- (id)_initWithSpeechStartTimestamp:(double)a0 speechDuration:(double)a1 voiceAnalytics:(id)a2 speakingRate:(double)a3 averagePauseDuration:(double)a4;

@end
