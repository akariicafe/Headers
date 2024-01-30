@class NSNumber, NSDictionary, NSString;

@interface AFVoiceIdScoreCard : NSObject <NSCopying, NSSecureCoding, AFDictionaryConvertible>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSNumber *spIdAudioProcessedDuration;
@property (readonly, copy, nonatomic) NSNumber *spIdUnknownUserScore;
@property (readonly, copy, nonatomic) NSDictionary *spIdKnownUserScores;
@property (readonly, copy, nonatomic) NSNumber *spIdUserScoresVersion;
@property (readonly, copy, nonatomic) NSString *spIdScoreThresholdingType;
@property (readonly, copy, nonatomic) NSString *spIdAssetVersion;
@property (readonly, copy, nonatomic) NSString *userClassified;
@property (readonly, nonatomic) long long userIdentityClassification;
@property (readonly, copy, nonatomic) NSNumber *lowScoreThreshold;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)newWithBuilder:(id /* block */)a0;

- (void)encodeWithCoder:(id)a0;
- (id)_descriptionWithIndent:(unsigned long long)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)buildDictionaryRepresentation;
- (id)init;
- (id)mutatedCopyWithMutator:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithBuilder:(id /* block */)a0;
- (id)initWithSpIdAudioProcessedDuration:(id)a0 spIdUnknownUserScore:(id)a1 spIdKnownUserScores:(id)a2 spIdUserScoresVersion:(id)a3 spIdScoreThresholdingType:(id)a4 spIdAssetVersion:(id)a5 userClassified:(id)a6 userIdentityClassification:(long long)a7;
- (id)initWithSpIdAudioProcessedDuration:(id)a0 spIdUnknownUserScore:(id)a1 spIdKnownUserScores:(id)a2 spIdUserScoresVersion:(id)a3 spIdScoreThresholdingType:(id)a4 spIdAssetVersion:(id)a5 userClassified:(id)a6 userIdentityClassification:(long long)a7 lowScoreThreshold:(id)a8;

@end
