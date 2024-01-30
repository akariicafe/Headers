@class NSArray;

@interface _EARSpeechRecognition : NSObject <NSCopying>

@property (copy, nonatomic) NSArray *tokenSausage;
@property (readonly, copy, nonatomic) NSArray *interpretationIndices;

+ (id)tokens:(id)a0 alignedToTokens:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)_initWithTokenPhraseChoiceList:(const void *)a0;
- (id)oneBest;
- (id)_initWithNBestList:(const void *)a0 useHatText:(BOOL)a1;
- (id)_initWithTokenSausage:(id)a0 interpretationIndices:(id)a1;
- (struct pair<std::vector<std::vector<unsigned int>>, std::vector<std::vector<std::vector<quasar::Token>>>> { struct vector<std::vector<unsigned int>, std::allocator<std::vector<unsigned int>>> { void *x0; void *x1; struct __compressed_pair<std::vector<unsigned int> *, std::allocator<std::vector<unsigned int>>> { void *x0; } x2; } x0; struct vector<std::vector<std::vector<quasar::Token>>, std::allocator<std::vector<std::vector<quasar::Token>>>> { void *x0; void *x1; struct __compressed_pair<std::vector<std::vector<quasar::Token>> *, std::allocator<std::vector<std::vector<quasar::Token>>>> { void *x0; } x2; } x1; })_tokenPhraseChoiceList;
- (id)granularizedRecognition;
- (id)nBest;
- (id)oneBestAlignedToTokens:(id)a0;

@end
