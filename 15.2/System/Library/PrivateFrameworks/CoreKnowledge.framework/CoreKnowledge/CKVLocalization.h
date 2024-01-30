@class NSString, NSURL;

@interface CKVLocalization : NSObject <NSSecureCoding> {
    NSURL *_cachedAssetPath;
    int _assetRequestCount;
    BOOL _assetIsEmbedded;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *siriLanguageCode;

+ (id)defaultLocalization;
+ (id)supportedLocaleFromLanguageCode:(id)a0;
+ (id)_languageCodeToLocaleIdentifierMap;
+ (id)assetPathForLocale:(id)a0;
+ (id)supportedLanguageCodeFromLocale:(id)a0;

- (BOOL)isEqualToLocalization:(id)a0;
- (id)_resolveAssetPathForSiriLanguage;
- (void)encodeWithCoder:(id)a0;
- (BOOL)refreshSiriLanguage;
- (id)assetPathForSiriLanguage:(BOOL *)a0;
- (BOOL)isSiriLanguageSupported;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithSiriLanguageCode:(id)a0;

@end
