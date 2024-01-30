@class TIKeyboardSecureCandidateTextTraits;

@interface TIKeyboardSecureCandidateLayoutTraits : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL forceSingleLineLayout;
@property (nonatomic) unsigned int headerInliningBehavior;
@property (retain, nonatomic) TIKeyboardSecureCandidateTextTraits *headerTraitsInOnlyLine;
@property (retain, nonatomic) TIKeyboardSecureCandidateTextTraits *headerTraitsInFirstLine;
@property (retain, nonatomic) TIKeyboardSecureCandidateTextTraits *inputTraitsInOnlyLine;
@property (retain, nonatomic) TIKeyboardSecureCandidateTextTraits *inputTraitsInFirstAndSecondLines;
@property (retain, nonatomic) TIKeyboardSecureCandidateTextTraits *inputTraitsInSecondLine;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
