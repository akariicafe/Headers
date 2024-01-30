@class NSString;

@interface IPLanguage : NSObject

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *localizedStringForName;
@property (readonly, nonatomic) IPLanguage *minimizedLanguage;

+ (id)languageWithIdentifier:(id)a0;
+ (id)languageWithIdentifier:(id)a0 normalize:(BOOL)a1;
+ (id)IPLanguagesWithLanguages:(id)a0 normalize:(BOOL)a1;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
