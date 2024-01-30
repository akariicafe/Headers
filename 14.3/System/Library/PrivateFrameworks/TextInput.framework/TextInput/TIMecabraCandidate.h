@class NSNumber, NSString;

@interface TIMecabraCandidate : TIKeyboardCandidate {
    BOOL _emojiCandidate;
    BOOL _extensionCandidate;
    BOOL _isForShortcutConversion;
    BOOL _isAutocorrection;
    BOOL _OTAWordListCandidate;
    BOOL _regionalCandidate;
    BOOL _responseKitCandidate;
    BOOL _bilingualCandidate;
    BOOL _asIsCandidate;
    BOOL _partialCandidate;
    BOOL _wubixingConvertedByPinyin;
    BOOL _prefixMatched;
    NSString *_candidate;
    NSString *_input;
    unsigned long long _deleteCount;
    long long _cursorMovement;
    NSString *_responseKitCategory;
}

@property (retain, nonatomic) NSNumber *mecabraCandidatePointerValue;
@property (nonatomic, getter=isContinuousPathConversion) BOOL continuousPathConversion;

+ (BOOL)supportsSecureCoding;
+ (int)type;

- (id)initWithCandidate:(id)a0 forInput:(id)a1 mecabraCandidatePointerValue:(id)a2 withFlags:(int)a3 deleteCount:(unsigned long long)a4 cursorMovement:(long long)a5;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isForShortcutConversion;
- (unsigned long long)deleteCount;
- (id)input;
- (id)initWithCandidateResultSetCoder:(id)a0;
- (void)encodeWithCandidateResultSetCoder:(id)a0;
- (BOOL)isAutocorrection;
- (BOOL)isBilingualCandidate;
- (BOOL)isPartialCandidate;
- (BOOL)isAsIsCandidate;
- (BOOL)isPrefixMatched;
- (BOOL)isWubixingConvertedByPinyin;
- (long long)cursorMovement;
- (BOOL)isEmojiCandidate;
- (BOOL)isExtensionCandidate;
- (BOOL)isOTAWordListCandidate;
- (BOOL)isRegionalCandidate;
- (BOOL)isFullwidthCandidate;
- (BOOL)isResponseKitCandidate;
- (id)responseKitCategory;
- (id)initWithCoder:(id)a0;
- (id)initWithSurface:(id)a0 input:(id)a1 mecabraCandidatePointerValue:(id)a2;
- (id)initWithResponseKitString:(id)a0 responseKitCategory:(id)a1 mecabraCandidatePointerValue:(id)a2;
- (id)initWithCandidate:(id)a0 forInput:(id)a1 mecabraCandidatePointerValue:(id)a2 withFlags:(int)a3;
- (BOOL)isEqual:(id)a0;
- (id)label;
- (id)candidate;
- (void)encodeWithCoder:(id)a0;

@end
