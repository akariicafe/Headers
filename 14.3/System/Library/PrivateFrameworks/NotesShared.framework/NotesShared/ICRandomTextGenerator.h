@class ICRandomNumberGenerator;

@interface ICRandomTextGenerator : NSObject

@property (retain, nonatomic) ICRandomNumberGenerator *randomNumberGenerator;
@property (nonatomic) unsigned long long language;
@property (readonly, nonatomic) BOOL isRightToLeftLanguage;

+ (id)wordsForLanguage:(unsigned long long)a0;
+ (id)loadWordsForLanguage:(unsigned long long)a0;
+ (BOOL)hasSpacesBetweenWordsForLanguage:(unsigned long long)a0;
+ (id)sentencePunctuationForLanguage:(unsigned long long)a0 endOfParagraph:(BOOL)a1;

- (id)word;
- (void).cxx_destruct;
- (id)lineOfText;
- (id)generateMinWords:(unsigned long long)a0 maxWords:(unsigned long long)a1;
- (id)generateMinSentences:(unsigned long long)a0 maxSentences:(unsigned long long)a1 minWords:(unsigned long long)a2 maxWords:(unsigned long long)a3;
- (id)generateWords:(unsigned long long)a0 minLength:(unsigned long long)a1;
- (id)initWithRandomNumberGenerator:(id)a0;
- (id)generateWordsWithMinLength:(unsigned long long)a0;
- (id)sentence;
- (id)paragraph;

@end
