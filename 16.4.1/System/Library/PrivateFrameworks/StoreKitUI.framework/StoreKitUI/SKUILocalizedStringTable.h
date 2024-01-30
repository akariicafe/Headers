@class NSString, NSBundle, NSDictionary;

@interface SKUILocalizedStringTable : NSObject {
    NSDictionary *_strings;
}

@property (readonly, nonatomic) NSBundle *bundle;
@property (readonly, nonatomic) NSString *tableName;

- (id)localizedStringForKey:(id)a0;
- (void).cxx_destruct;
- (id)_legacyLanguageNameForLanguageCode:(id)a0;
- (id)initWithBundle:(id)a0 localeName:(id)a1 tableName:(id)a2;

@end
