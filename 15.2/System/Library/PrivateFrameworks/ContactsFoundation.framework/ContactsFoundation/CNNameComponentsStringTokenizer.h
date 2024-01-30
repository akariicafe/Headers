@class NSString, NSPersonNameComponents, NSArray;

@interface CNNameComponentsStringTokenizer : NSObject

@property (copy) NSString *string;
@property (retain) NSPersonNameComponents *components;
@property (retain) NSArray *tokens;

+ (id)tokensFromString:(id)a0 nameOrder:(long long *)a1;
+ (id)namePrefixElements;
+ (id)componentsFromString:(id)a0;
+ (id)nobiliaryParticleElements;
+ (id)uncachedNameComponentElements;
+ (id)tokensByAdjustingForNobiliaryParticles:(id)a0;
+ (BOOL)isNobiliaryParticle:(id)a0;
+ (BOOL)isNameSuffix:(id)a0;
+ (id)whitespaceTokens:(id)a0;
+ (BOOL)isNamePrefix:(id)a0;
+ (id)nameComponentElements;
+ (id)nameSuffixElements;

- (id)initWithString:(id)a0;
- (void)adjustTokensForNobiliaryParticles;
- (void).cxx_destruct;
- (void)extractNicknameFromQuotedContent;
- (id)parseComponents;
- (void)extractNamePrefixFromBeginning;
- (void)extractNameSuffixFromEnd;
- (void)removeParentheticalContent;
- (void)extractGivenMiddleFamilyNamesFromWhatsLeftUsingOrder:(long long)a0;

@end
