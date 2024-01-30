@class NSArray;

@interface VOSSettingsHelper : NSObject

@property (class, readonly, nonatomic) id /* block */ percentageFormatter;
@property (class, readonly, nonatomic) id /* block */ typingStyleFormatter;
@property (class, readonly, nonatomic) id /* block */ navigationStyleFormatter;
@property (class, readonly, nonatomic) id /* block */ navigateImagesFormatter;
@property (class, readonly, nonatomic) id /* block */ phoneticFeedbackFormatter;
@property (class, readonly, nonatomic) id /* block */ brailleTableFormatter;
@property (class, readonly, nonatomic) id /* block */ mediaDescriptionsFormatter;
@property (class, readonly, nonatomic) id /* block */ gestureDirectionFormatter;
@property (class, readonly, nonatomic) id /* block */ activitiesFormatter;

@property (retain, nonatomic) NSArray *enabledLanguageCodes;
@property (nonatomic, getter=isSlideToTypeEnabled) BOOL slideToTypeEnabled;

+ (id)sharedInstance;
+ (id /* block */)durationFormatter;
+ (id /* block */)brailleInputOutputFormatter;
+ (id /* block */)languageFormatterForEnabledLanguageCodes:(id)a0;
+ (id /* block */)punctuationFormatter;
+ (id /* block */)typingFeedbackFormatter;

- (id)_init;
- (void).cxx_destruct;
- (id)_enabledLanguageCodes;
- (id /* block */)_formatterForItem:(id)a0;
- (id)formattedValue:(id)a0 withItem:(id)a1;
- (id)identifierForItem:(id)a0;
- (BOOL)isItemSupported:(id)a0;
- (id)nameForItem:(id)a0;
- (id)possibleValuesForSettingsItem:(id)a0;
- (void)saveUserSettingsItems:(id)a0;
- (id)scaledValue:(id)a0 withItem:(id)a1;
- (void)setNextValueForItem:(id)a0 inDirection:(long long)a1;
- (void)setValue:(id)a0 forSettingsItem:(id)a1;
- (id)userSettingsItems;
- (id)valueForSettingsItem:(id)a0;

@end
