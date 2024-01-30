@class NSString, _WKWebExtensionMatchPattern, NSArray;

@interface WBSWebExtensionMatchPattern : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) _WKWebExtensionMatchPattern *webKitMatchPattern;
@property (readonly, nonatomic) NSString *scheme;
@property (readonly, nonatomic) NSString *host;
@property (readonly, nonatomic) NSString *path;
@property (readonly, nonatomic) NSArray *expandedMatchPatternStrings;
@property (readonly, nonatomic) BOOL matchesAllURLs;
@property (readonly, nonatomic) BOOL matchesAllHosts;

+ (void)initialize;
+ (id)allHostsAndSchemesMatchPattern;
+ (id)allHostsAndSchemesMatchPatternSet;
+ (id)matchPatternWithString:(id)a0;
+ (id)matchPatternForDomain:(id)a0;
+ (BOOL)patternSetContainsAllHostsPattern:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithString:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithScheme:(id)a0 host:(id)a1 path:(id)a2;
- (BOOL)matchesPattern:(id)a0;
- (BOOL)matchesPattern:(id)a0 options:(unsigned long long)a1;
- (BOOL)matchesURL:(id)a0;
- (BOOL)matchesURL:(id)a0 options:(unsigned long long)a1;
- (id)_descriptionWithScheme:(id)a0;
- (id)_initWithWebKitMatchPattern:(id)a0;
- (id)_webKitMatchPattern;
- (id)initWithString:(id)a0 exception:(id *)a1;

@end
