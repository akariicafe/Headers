@class NSString;

@interface PSLanguage : NSObject

@property (retain, nonatomic) NSString *languageCode;
@property (retain, nonatomic) NSString *languageName;
@property (retain, nonatomic) NSString *localizedLanguageName;

+ (id)languageWithCode:(id)a0 name:(id)a1 localizedName:(id)a2;

- (void).cxx_destruct;
- (BOOL)displayNamesAreEqual;

@end
