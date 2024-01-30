@class AFVoiceIdScoreCard, NSString, NSDictionary, NSNumber;

@interface _AFVoiceIdScoreCardMutation : NSObject <AFVoiceIdScoreCardMutating> {
    AFVoiceIdScoreCard *_base;
    NSNumber *_spIdAudioProcessedDuration;
    NSNumber *_spIdUnknownUserScore;
    NSDictionary *_spIdKnownUserScores;
    NSNumber *_spIdUserScoresVersion;
    NSString *_spIdScoreThresholdingType;
    NSString *_spIdAssetVersion;
    NSString *_userClassified;
    long long _userIdentityClassification;
    NSNumber *_lowScoreThreshold;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasSpIdAudioProcessedDuration : 1; unsigned char hasSpIdUnknownUserScore : 1; unsigned char hasSpIdKnownUserScores : 1; unsigned char hasSpIdUserScoresVersion : 1; unsigned char hasSpIdScoreThresholdingType : 1; unsigned char hasSpIdAssetVersion : 1; unsigned char hasUserClassified : 1; unsigned char hasUserIdentityClassification : 1; unsigned char hasLowScoreThreshold : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isDirty;
- (id)initWithBase:(id)a0;
- (void).cxx_destruct;
- (id)getLowScoreThreshold;
- (id)getSpIdAssetVersion;
- (id)getSpIdAudioProcessedDuration;
- (id)getSpIdKnownUserScores;
- (id)getSpIdScoreThresholdingType;
- (id)getSpIdUnknownUserScore;
- (id)getSpIdUserScoresVersion;
- (id)getUserClassified;
- (long long)getUserIdentityClassification;
- (void)setLowScoreThreshold:(id)a0;
- (void)setSpIdAssetVersion:(id)a0;
- (void)setSpIdAudioProcessedDuration:(id)a0;
- (void)setSpIdKnownUserScores:(id)a0;
- (void)setSpIdScoreThresholdingType:(id)a0;
- (void)setSpIdUnknownUserScore:(id)a0;
- (void)setSpIdUserScoresVersion:(id)a0;
- (void)setUserClassified:(id)a0;
- (void)setUserIdentityClassification:(long long)a0;

@end
