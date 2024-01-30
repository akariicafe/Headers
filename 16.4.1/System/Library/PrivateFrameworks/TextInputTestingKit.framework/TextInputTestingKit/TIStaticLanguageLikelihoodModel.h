@class NSString, TIInputMode;

@interface TIStaticLanguageLikelihoodModel : NSObject <TILanguageLikelihoodModeling>

@property (readonly, nonatomic) TIInputMode *primaryInputMode;
@property (readonly, nonatomic) TIInputMode *secondaryInputMode;
@property (readonly, nonatomic) float primaryLanguageWeight;
@property (readonly, nonatomic) float secondaryLanguageWeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)emojiUsageCountForApp:(id)a0 lastEmojiCountUpdateTime:(double *)a1;
- (id)rankedLanguagesForRecipient:(id)a0;
- (void)addEvidence:(id)a0 timestamp:(double)a1 adaptationType:(int)a2 forRecipient:(id)a3 app:(id)a4 language:(id)a5;
- (double)lastOfflineAdaptationTimeForApp:(id)a0;
- (void)priorProbabilityForLanguages:(id)a0 recipient:(id)a1 handler:(id /* block */)a2;
- (void).cxx_destruct;
- (float)_priorProbabilityForLanguage:(id)a0 recipient:(id)a1;
- (id)initWithPrimaryInputMode:(id)a0 secondaryInputMode:(id)a1 secondaryLanguageWeight:(float)a2;

@end
