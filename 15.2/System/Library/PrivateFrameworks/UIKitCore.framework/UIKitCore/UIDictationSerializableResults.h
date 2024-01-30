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

- (void)encodeWithCoder:(id)a0;
- (id)bestText;
- (id)textArray;
- (id)initWithPhrases:(id)a0;
- (id)initWithDetectedPhrases:(id)a0 multilingualAlternatives:(id)a1;
- (id)description;
- (id)initWithArrayOfArrayOfStrings:(id)a0;
- (id)bestTextForMultilingualAlternatives;
- (id)dictationPhraseArray;
- (id)bestTextArray;
- (void).cxx_destruct;
- (id)init;
- (id)multilingualResultsByLanguageCode;
- (id)initWithCoder:(id)a0;
- (id)secondBestText;
- (id)text;
- (id)singleLineResult;
- (id)secondBestTextArray;
- (id)bestTextArrayForAlternatives:(id)a0;
- (id)textArrayForAlternatives:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)bestResults;
- (void)dealloc;

@end
