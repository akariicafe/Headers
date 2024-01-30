@class NSString, NSPersonNameComponents, NSArray;

@interface CNNameComponentsStringTokenizer : NSObject

@property (copy) NSString *string;
@property (retain) NSPersonNameComponents *components;
@property (retain) NSArray *tokens;

+ (id)componentsFromString:(id)a0;
+ (BOOL)isNamePrefix:(id)a0;
+ (BOOL)isNameSuffix:(id)a0;
+ (BOOL)isNobiliaryParticle:(id)a0;
+ (id)nameComponentElements;
+ (id)namePrefixElements;
+ (id)nameSuffixElements;
+ (id)nobiliaryParticleElements;
+ (id)tokensByAdjustingForNobiliaryParticles:(id)a0;
+ (id)tokensFromString:(id)a0 nameOrder:(long long *)a1;
+ (id)uncachedNameComponentElements;
+ (id)whitespaceTokens:(id)a0;

- (id)initWithString:(id)a0;
- (void).cxx_destruct;
- (id)parseComponents;
- (void)adjustTokensForNobiliaryParticles;
- (void)extractGivenMiddleFamilyNamesFromWhatsLeftUsingOrder:(long long)a0;
- (void)extractNamePrefixFromBeginning;
- (void)extractNameSuffixFromEnd;
- (void)extractNicknameFromQuotedContent;
- (void)removeParentheticalContent;

@end
