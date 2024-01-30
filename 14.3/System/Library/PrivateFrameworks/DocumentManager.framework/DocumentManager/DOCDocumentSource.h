@class NSArray, NSString, UIImage, FPProviderDomain;

@interface DOCDocumentSource : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSArray *documentTypes;
@property (copy) NSString *displayName;
@property (copy) NSString *providerName;
@property (copy) NSString *domainName;
@property (retain) UIImage *icon;
@property (copy) NSString *identifier;
@property (copy) NSString *promptText;
@property BOOL hasTemplateIcon;
@property BOOL hidden;
@property FPProviderDomain *searching_fileProviderDomain;
@property (readonly, nonatomic) NSArray *supportedSearchFilters;
@property (readonly) BOOL isAvailableSystemWide;
@property (readonly) unsigned long long status;
@property (readonly) BOOL appearsInMoveUI;
@property (readonly) BOOL isiCloudBased;

+ (void)endSearchingSources:(id)a0;
+ (id)startSearchingSourcesForBundleIdentifier:(id)a0 updateBlock:(id /* block */)a1;
+ (void)defaultSourceForBundleIdentifier:(id)a0 completionBlock:(id /* block */)a1;
+ (void)setDefaultSource:(id)a0 forBundleIdentifier:(id)a1;
+ (id)defaultSourceIdentifierForBundleIdentifier:(id)a0;
+ (void)defaultSourceForBundleIdentifier:(id)a0 selectedSourceIdentifier:(id)a1 completionBlock:(id /* block */)a2;
+ (void)setDefaultSourceIdentifier:(id)a0 forBundleIdentifier:(id)a1;
+ (id)defaultSourceForBundleIdentifier:(id)a0 defaultSourceIdentifier:(id)a1 sources:(id)a2;
+ (id)sourceIdentifierOrderWithDefault:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)sanitizedSource;
- (BOOL)usesEnumeration;
- (BOOL)isValidForConfiguration:(id)a0;

@end
