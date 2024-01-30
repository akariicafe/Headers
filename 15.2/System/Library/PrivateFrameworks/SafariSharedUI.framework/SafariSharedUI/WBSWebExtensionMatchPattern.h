@class NSString, NSArray;

@interface WBSWebExtensionMatchPattern : NSObject <NSSecureCoding, NSCopying> {
    NSString *_description;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *scheme;
@property (readonly, nonatomic) NSString *host;
@property (readonly, nonatomic) NSString *path;
@property (readonly, nonatomic) NSArray *expandedMatchPatternStrings;
@property (readonly, nonatomic) BOOL matchesAllURLs;
@property (readonly, nonatomic) BOOL matchesAllHosts;

+ (BOOL)patternSetContainsAllHostsPattern:(id)a0;
+ (id)matchPatternForDomain:(id)a0;
+ (id)allHostsAndSchemesMatchPatternSet;
+ (id)allHostsAndSchemesMatchPattern;
+ (id)matchPatternWithString:(id)a0;

- (id)initWithString:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithScheme:(id)a0 host:(id)a1 path:(id)a2;
- (BOOL)matchesURL:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithString:(id)a0 exception:(id *)a1;
- (BOOL)matchesPattern:(id)a0 options:(unsigned long long)a1;
- (BOOL)_parse:(id)a0 exception:(id *)a1;
- (id)_descriptionWithScheme:(id)a0;
- (BOOL)_schemeCanBeParsed:(id)a0;
- (BOOL)matchesURL:(id)a0 options:(unsigned long long)a1;
- (BOOL)_schemeMatches:(id)a0 options:(unsigned long long)a1;
- (BOOL)_hostMatches:(id)a0 options:(unsigned long long)a1;
- (BOOL)_pathMatches:(id)a0 options:(unsigned long long)a1;
- (BOOL)matchesPattern:(id)a0;

@end
