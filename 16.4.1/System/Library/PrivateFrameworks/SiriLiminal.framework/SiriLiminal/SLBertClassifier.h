@class NSArray, NSString, MLModel;

@interface SLBertClassifier : NSObject

@property (retain, nonatomic) NSArray *vocab;
@property (retain, nonatomic) NSString *unkToken;
@property (nonatomic) unsigned long long maxInputCharsPerWord;
@property (nonatomic) unsigned long long maxNumTokens;
@property (retain, nonatomic) MLModel *bertModel;
@property (retain, nonatomic) NSString *assetVersion;
@property (nonatomic) BOOL shouldAppendLeadingText;
@property (nonatomic) unsigned long long numLeadingTokens;
@property (retain, nonatomic) NSString *outputNodeName;
@property (retain, nonatomic) NSArray *truncationTokenList;

- (void).cxx_destruct;
- (id)_normalizeText:(id)a0;
- (id)_convert1dMLMultiArrayToNSArray:(id)a0;
- (id)_createInputIdsAndRunModel:(id)a0;
- (BOOL)_isCharPunctuation:(unsigned short)a0;
- (void)_readVocabFromFile:(id)a0;
- (id)_splitOnPunctuation:(id)a0;
- (id)_wordPieceTokenizer:(id)a0;
- (id)initWithConfig:(id)a0 error:(id *)a1 locale:(id)a2;
- (id)processInputText:(id)a0;
- (id)processSpeechPackage:(id)a0;

@end
