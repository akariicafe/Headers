@class NSString, TIProactiveTrigger;

@interface TIKeyboardCandidate : NSObject <NSCopying, NSSecureCoding, TIKeyboardCandidateCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *candidate;
@property (readonly, nonatomic) NSString *input;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *alternativeText;
@property (copy, nonatomic) NSString *annotationText;
@property (readonly, nonatomic) unsigned long long wordOriginFeedbackID;
@property (readonly, nonatomic) unsigned long long deleteCount;
@property (readonly, nonatomic) long long cursorMovement;
@property (readonly, nonatomic) BOOL isForShortcutConversion;
@property (readonly, nonatomic) BOOL isAutocorrection;
@property (readonly, nonatomic, getter=isContinuousPathConversion) BOOL continuousPathConversion;
@property (readonly, nonatomic) BOOL shouldAccept;
@property (readonly, nonatomic) BOOL shouldInsertSpaceAfterSelection;
@property (nonatomic) unsigned int slotID;
@property (nonatomic) unsigned long long customInfoType;
@property (nonatomic) BOOL isSendCurrentLocation;
@property (readonly, nonatomic, getter=isExtensionCandidate) BOOL extensionCandidate;
@property (readonly, nonatomic, getter=isEmojiCandidate) BOOL emojiCandidate;
@property (readonly, nonatomic, getter=isCompletionCandidate) BOOL completionCandidate;
@property (readonly, nonatomic, getter=isInlineCompletionCandidate) BOOL inlineCompletionCandidate;
@property (readonly, nonatomic, getter=isFullwidthCandidate) BOOL fullwidthCandidate;
@property (readonly, nonatomic, getter=isFacemarkCandidate) BOOL facemarkCandidate;
@property (readonly, nonatomic, getter=isPunctuationCompletionCandidate) BOOL punctuationCompletionCandidate;
@property (readonly, nonatomic, getter=isPunctuationKeyCandidate) BOOL punctuationKeyCandidate;
@property (readonly, nonatomic, getter=isOTAWordListCandidate) BOOL OTAWordListCandidate;
@property (readonly, nonatomic, getter=isRegionalCandidate) BOOL regionalCandidate;
@property (readonly, nonatomic, getter=isResponseKitCandidate) BOOL responseKitCandidate;
@property (readonly, nonatomic, getter=isBilingualCandidate) BOOL bilingualCandidate;
@property (readonly, nonatomic, getter=isAsIsCandidate) BOOL asIsCandidate;
@property (readonly, nonatomic, getter=isWubixingConvertedByPinyin) BOOL wubixingConvertedByPinyin;
@property (readonly, nonatomic, getter=isPrefixMatched) BOOL prefixMatched;
@property (readonly, nonatomic, getter=isTransliterationCandidate) BOOL transliterationCandidate;
@property (readonly, nonatomic, getter=isPartialCandidate) BOOL partialCandidate;
@property (readonly, nonatomic, getter=isInlineCandidate) BOOL inlineCandidate;
@property (readonly, copy, nonatomic) NSString *responseKitCategory;
@property (readonly, nonatomic, getter=isSecureContentCandidate) BOOL secureContentCandidate;
@property (readonly, nonatomic) TIProactiveTrigger *proactiveTrigger;
@property (nonatomic) unsigned long long indexForMetrics;
@property (readonly, nonatomic) BOOL isAddress;
@property (readonly, nonatomic) unsigned int usageTrackingMask;
@property (readonly, nonatomic) unsigned int sourceMask;
@property (readonly, nonatomic, getter=confidence) int confidence;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (int)type;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isPunctuation;
- (id)initWithCandidateResultSetCoder:(id)a0;
- (void)encodeWithCandidateResultSetCoder:(id)a0;
- (id)candidateByReplacingWithCandidate:(id)a0 input:(id)a1;
- (id)candidateByReplacingWithCandidate:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
