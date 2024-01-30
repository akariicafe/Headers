@class NSString, UnitsInfo, Trie, NSArray, NSMutableArray, CalculateToken;

@interface CalculateTokenizer : NSObject

@property (retain, nonatomic) UnitsInfo *unitsInfo;
@property (retain, nonatomic) Trie *trie;
@property (nonatomic) unsigned long long stringLength;
@property (nonatomic) unsigned long long peekIndex;
@property (retain, nonatomic) NSMutableArray *peekTokens;
@property (retain, nonatomic) CalculateToken *lastToken;
@property (retain, nonatomic) NSMutableArray *wordBreakIndices;
@property (nonatomic) unsigned long long wordBreakIndicesIndex;
@property (readonly, nonatomic) unsigned long long index;
@property (retain, nonatomic) NSString *string;
@property (retain, nonatomic) NSArray *locales;

+ (int)displayNameExponent:(id)a0;
+ (id)tokenizerWithUnits:(id)a0;

- (void).cxx_destruct;
- (void)reset;
- (id)nextToken;
- (void)_loadIfNeeded;
- (void)_findTokens;
- (id)initWithUnits:(id)a0;
- (id)peekToken;

@end
