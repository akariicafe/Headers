@class NSString, NSDictionary, NSUUID, NSLocale;

@interface WBSWebExtensionLocalization : NSObject <NSSecureCoding> {
    NSDictionary *_localizationDictionary;
    NSString *_localeString;
    NSLocale *_locale;
    NSUUID *_uniqueIdentifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)localizedStringForString:(id)a0;
- (id)localizedStringForKey:(id)a0 withPlaceholders:(id)a1;
- (id)initWithBundleURL:(id)a0 defaultLocale:(id)a1 uniqueIdentifier:(id)a2 extensionIdentifier:(id)a3;
- (id)localizedDictionaryForDictionary:(id)a0;
- (id)initWithRegionalLocalization:(id)a0 languageLocalization:(id)a1 defaultLocalization:(id)a2 withBestLocale:(id)a3 uniqueIdentifier:(id)a4;
- (id)_predefinedMessagesForLocale:(id)a0;
- (id)_localizedArrayForArray:(id)a0;
- (id)_stringByReplacingNamedPlaceholdersInString:(id)a0 withNamedPlaceholders:(id)a1;
- (id)_stringByReplacingPositionalPlaceholdersInString:(id)a0 withValues:(id)a1;

@end
