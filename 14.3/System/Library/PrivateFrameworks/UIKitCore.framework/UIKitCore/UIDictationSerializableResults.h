@class NSArray, NSIndexPath;

@interface UIDictationSerializableResults : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *phrases;
@property (copy, nonatomic) NSArray *multilingualAlternatives;
@property (nonatomic) BOOL fromKeyboard;
@property (nonatomic) BOOL showMultilingualAlternatives;
@property (nonatomic) BOOL lowConfidenceAboutLanguageDetection;
@property (nonatomic) const struct __CFString { } *transform;
@property (nonatomic) BOOL useServerCapitalization;
@property (nonatomic) BOOL addTrailingSpace;
@property (retain, nonatomic) NSIndexPath *indexPathOfInterpretations;
@property (readonly, nonatomic) BOOL allowsAlternatives;

- (id)init;
- (void).cxx_destruct;
- (id)bestText;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithPhrases:(id)a0;
- (id)initWithDetectedPhrases:(id)a0 multilingualAlternatives:(id)a1;
- (id)text;
- (id)textArray;
- (void)dealloc;
- (id)initWithArrayOfArrayOfStrings:(id)a0;
- (id)bestTextForMultilingualAlternatives;
- (id)dictationPhraseArray;
- (id)bestTextArray;
- (id)initWithCoder:(id)a0;
- (id)multilingualResultsByLanguageCode;
- (id)secondBestTextArray;
- (id)bestTextArrayForAlternatives:(id)a0;
- (id)secondBestText;
- (id)textArrayForAlternatives:(id)a0;
- (id)singleLineResult;
- (id)description;
- (id)bestResults;
- (void)encodeWithCoder:(id)a0;

@end
