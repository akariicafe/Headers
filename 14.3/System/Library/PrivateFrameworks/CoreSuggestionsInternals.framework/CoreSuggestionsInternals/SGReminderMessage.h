@class SGDuplicateKey, NSArray, SGMessage, SGPipelineEntity;

@interface SGReminderMessage : SGExtractionDocument

@property (retain, nonatomic) SGMessage *message;
@property (retain, nonatomic) SGPipelineEntity *entity;
@property (retain, nonatomic) NSArray *plainTextDetectedData;
@property (retain, nonatomic) SGDuplicateKey *extractedReminderDuplicateKey;

+ (BOOL)excludedContent:(id)a0;
+ (id)detectedTitleInModelOutput:(id)a0 enrichedTaggedCharacterRanges:(id)a1 textContent:(id)a2 language:(id)a3;
+ (BOOL)tokensMatchedInContent:(id)a0 content:(id)a1;
+ (id)triggerOptionalTokens;
+ (BOOL)isConfirmationOptionalForContent:(id)a0;
+ (BOOL)shouldAddTitlePrefixForContent:(id)a0;
+ (id)titlePrependForActionVerbIndexRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 enrichedTaggedCharacterRanges:(id)a1 language:(id)a2 content:(id)a3;
+ (id)frenchPrependForEnrichedTaggedCharacterRanges:(id)a0 actionVerbIndexRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
+ (BOOL)validActionVerbIndexRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 enrichedTaggedCharacterRanges:(id)a1;
+ (BOOL)validObjectCoreIndexRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 enrichedTaggedCharacterRanges:(id)a1;
+ (id)posTaggerNouns;
+ (BOOL)validModelOutput:(id)a0 error:(id *)a1;
+ (BOOL)enrichedTaggedCharacterRangesContainsProfanity:(id)a0;
+ (id)confirmationOptionalTokens;
+ (id)excludeList;
+ (id)titlePrefixTokens;
+ (id)regexFromJoinedArray:(id)a0 wordBoundary:(id)a1;
+ (id)searchTokensForReminderTitle:(id)a0;

- (void).cxx_destruct;
- (id)dueLocation;
- (BOOL)hasTrigger;
- (id)initWithMessage:(id)a0 entity:(id)a1 enrichedTaggedCharacterRanges:(id)a2 modelOutput:(id)a3;
- (id)initWithMessage:(id)a0 plainTextDetectedData:(id)a1 enrichedTaggedCharacterRanges:(id)a2 modelOutput:(id)a3;
- (BOOL)isConfirmation;
- (BOOL)isRejection;
- (BOOL)isProposal;
- (BOOL)isTriggerOptional;
- (id)detectedTitleForLanguage:(id)a0;
- (id)dueDateDataDetectorMatches;
- (id)detectedDueDateComponents;
- (id)_labelTokenIndexesForOutputName:(id)a0 label:(id)a1;

@end
