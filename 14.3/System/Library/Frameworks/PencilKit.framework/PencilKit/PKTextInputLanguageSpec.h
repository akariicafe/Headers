@class NSString, NSLocale;

@interface PKTextInputLanguageSpec : NSObject

@property (readonly, nonatomic) long long _currentLanguage;
@property (readonly, nonatomic) NSLocale *_locale;
@property (readonly, nonatomic) long long uncommittedTokenColumnCount;
@property (readonly, nonatomic) double strokeFadeOutDuration;
@property (readonly, nonatomic) double standardCommitDelay;
@property (readonly, nonatomic) double singleCharacterCommitDelay;
@property (readonly, nonatomic) NSString *debugLocaleDescription;

- (void).cxx_destruct;
- (id)initWithLocale:(id)a0;
- (void)configureLocaleForRecognitionManager:(id)a0;

@end
