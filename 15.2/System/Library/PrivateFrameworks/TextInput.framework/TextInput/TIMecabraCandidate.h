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
@property (readonly, nonatomic) unsigned short flags;

+ (BOOL)supportsSecureCoding;
+ (int)type;

- (id)input;
- (id)initWithCandidate:(id)a0 forInput:(id)a1 mecabraCandidatePointerValue:(id)a2 withFlags:(unsigned short)a3 deleteCount:(unsigned long long)a4 cursorMovement:(long long)a5;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isAutocorrection;
- (BOOL)isBilingualCandidate;
- (id)initWithCandidateResultSetCoder:(id)a0;
- (BOOL)isPartialCandidate;
- (void)encodeWithCandidateResultSetCoder:(id)a0;
- (BOOL)isMecabraCandidate;
- (BOOL)isAsIsCandidate;
- (BOOL)isWubixingConvertedByPinyin;
- (BOOL)isPrefixMatched;
- (id)label;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithSurface:(id)a0 input:(id)a1 mecabraCandidatePointerValue:(id)a2;
- (id)initWithResponseKitString:(id)a0 responseKitCategory:(id)a1 mecabraCandidatePointerValue:(id)a2;
- (id)initWithCandidate:(id)a0 forInput:(id)a1 mecabraCandidatePointerValue:(id)a2 withFlags:(unsigned short)a3;
- (BOOL)isForShortcutConversion;
- (id)initWithCoder:(id)a0;
- (long long)cursorMovement;
- (unsigned long long)deleteCount;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEmojiCandidate;
- (BOOL)isExtensionCandidate;
- (BOOL)isOTAWordListCandidate;
- (BOOL)isRegionalCandidate;
- (BOOL)isFullwidthCandidate;
- (BOOL)isResponseKitCandidate;
- (id)responseKitCategory;
- (id)candidate;

@end
