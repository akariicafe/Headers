@class SGHKHealthStore, NSString, SGQuickResponsesML, SGDetectedAttributeML, SGContactPipelineHelper, NSSet;

@interface SGDetectedAttributeDissector : SGPipelineDissector <SGMailMessageProcessing, SGTextMessageProcessing> {
    SGDetectedAttributeML *_ml;
    SGQuickResponsesML *_mlQR;
    SGContactPipelineHelper *_contactsHelper;
    SGHKHealthStore *_healthStore;
    BOOL _filterWithAddressBook;
    float _unlikelyPhoneSamplingRate;
    NSSet *_hmmTrustedLanguages;
    NSSet *_ddTrustedLanguages;
    NSSet *_coreNLPTrustedLanguages;
}

@property (nonatomic) unsigned long long selfIdentificationMessageCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)dissectorWithMockedMLTrainingForTests;
+ (void)clearConversationCache;
+ (BOOL)isTwoPersonConversation:(id)a0;
+ (BOOL)isNameRequest:(id)a0;
+ (void)_logSelfIDForMessage:(id)a0 detection:(id)a1 modelType:(struct SGMSelfIdModelType_ { unsigned long long x0; })a2 modelVersion:(unsigned long long)a3;
+ (BOOL)isPhoneContext:(id)a0;
+ (BOOL)isMaybeNameContext:(id)a0;
+ (BOOL)isBirthdayContext:(id)a0;
+ (BOOL)isAddressContext:(id)a0;
+ (id)currentPatterns;
+ (id)patterns;

- (id)initWithML:(id)a0 withMLQR:(id)a1 andHealthStore:(id)a2;
- (id)detailTypeFromPrefix:(id)a0;
- (void)handleTextMessageBirthdayCongratulation:(id)a0 entity:(id)a1 withConversationHistory:(id)a2;
- (void)_removeUnwantedContactDetails:(id)a0 entity:(id)a1;
- (id)filterDangerousSigEmailDetections:(id)a0 message:(id)a1;
- (void)logBirthdayExtractionMetricForPerson:(id)a0 forDate:(id)a1 isFromCongratulation:(unsigned char)a2 withModelVersion:(id)a3 didRegexTrigger:(unsigned char)a4 didResponseKitTrigger:(unsigned char)a5;
- (id)_extractEmailishTokenFromMailHeader:(id)a0;
- (id)getLineContaining:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inText:(id)a1;
- (id)filterDangerousSigDetections:(id)a0 message:(id)a1;
- (void).cxx_destruct;
- (id)filterDangerousSigAddressDetections:(id)a0;
- (id)init;
- (id)detectionFromBodyDDMatch:(id)a0 message:(id)a1 withSupervisionToFill:(id)a2 isUnlikelyPhone:(BOOL)a3;
- (void)handleTextMessageSelfIdentification:(id)a0 entity:(id)a1 withConversationHistory:(id)a2;
- (void)dissectTextMessage:(id)a0 entity:(id)a1 context:(id)a2;
- (id)detectionFromSignatureDDMatch:(id)a0 message:(id)a1 detectedLabelRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a2 lastClaimedLabelRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 isUnlikelyPhone:(BOOL)a4;
- (void)_dissectMessage:(id)a0 entity:(id)a1;
- (id)detailTypeFromPrefix:(id)a0 detectedLabelPointer:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (id)_makeAlnum:(id)a0;
- (void)_addAuthorContactForMessage:(id)a0 entity:(id)a1;
- (void)dissectMailMessage:(id)a0 entity:(id)a1 context:(id)a2;
- (id)getResponsesForBirthdayExtractionFromMessage:(id)a0 withLanguage:(id)a1;
- (id)filterDangerousSigPhoneDetections:(id)a0 message:(id)a1;
- (id)_makeSimplifiedListIdEmail:(id)a0;
- (id)processTextMessageConversation:(id)a0 threadLength:(unsigned long long)a1;

@end
