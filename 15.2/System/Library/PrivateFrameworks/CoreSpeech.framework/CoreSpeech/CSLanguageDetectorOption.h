@class NSSet, NSString, NSArray, NSDictionary;

@interface CSLanguageDetectorOption : NSObject

@property (nonatomic) float samplingRate;
@property (retain, nonatomic) NSSet *dictationLanguages;
@property (retain, nonatomic) NSString *currentKeyboard;
@property (nonatomic) BOOL wasLanguageToggled;
@property (retain, nonatomic) NSArray *multilingualKeyboardLanguages;
@property (retain, nonatomic) NSDictionary *keyboardConvoLanguagePriors;
@property (retain, nonatomic) NSDictionary *keyboardGlobalLanguagePriors;
@property (retain, nonatomic) NSString *previousMessageLanguage;
@property (retain, nonatomic) NSString *globalLastKeyboardUsed;
@property (retain, nonatomic) NSDictionary *dictationLanguagePriors;
@property (retain, nonatomic) NSArray *conversationalMessages;

- (void).cxx_destruct;
- (id)languageDetectorRequestContext;

@end
