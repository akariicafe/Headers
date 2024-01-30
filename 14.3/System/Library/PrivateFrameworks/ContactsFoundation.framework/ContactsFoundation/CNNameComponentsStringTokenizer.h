@class NSString, NSPersonNameComponents, NSArray;

@interface CNNameComponentsStringTokenizer : NSObject

@property (copy) NSString *string;
@property (retain) NSPersonNameComponents *components;
@property (retain) NSArray *tokens;

+ (id)tokensFromString:(id)a0 nameOrder:(long long *)a1;
+ (id)whitespaceTokens:(id)a0;
+ (BOOL)isNameSuffix:(id)a0;
+ (BOOL)isNamePrefix:(id)a0;
+ (id)tokensByAdjustingForNobiliaryParticles:(id)a0;
+ (BOOL)isNobiliaryParticle:(id)a0;
+ (id)namePrefixElements;
+ (id)nameComponentElements;
+ (id)nameSuffixElements;
+ (id)nobiliaryParticleElements;
+ (id)uncachedNameComponentElements;
+ (id)componentsFromString:(id)a0;

- (void).cxx_destruct;
- (id)parseComponents;
- (void)removeParentheticalContent;
- (void)extractNicknameFromQuotedContent;
- (void)extractNameSuffixFromEnd;
- (void)extractNamePrefixFromBeginning;
- (void)adjustTokensForNobiliaryParticles;
- (void)extractGivenMiddleFamilyNamesFromWhatsLeftUsingOrder:(long long)a0;
- (id)initWithString:(id)a0;

@end
