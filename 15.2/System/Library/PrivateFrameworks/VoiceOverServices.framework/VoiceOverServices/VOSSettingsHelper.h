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
+ (id /* block */)punctuationFormatter;
+ (id /* block */)typingFeedbackFormatter;
+ (id /* block */)languageFormatterForEnabledLanguageCodes:(id)a0;
+ (id /* block */)brailleInputOutputFormatter;

- (void).cxx_destruct;
- (id)_init;
- (id)nameForItem:(id)a0;
- (id)identifierForItem:(id)a0;
- (BOOL)isItemSupported:(id)a0;
- (id)_enabledLanguageCodes;
- (id)possibleValuesForSettingsItem:(id)a0;
- (id)valueForSettingsItem:(id)a0;
- (void)setValue:(id)a0 forSettingsItem:(id)a1;
- (id)scaledValue:(id)a0 withItem:(id)a1;
- (id /* block */)_formatterForItem:(id)a0;
- (id)userSettingsItems;
- (void)saveUserSettingsItems:(id)a0;
- (void)setNextValueForItem:(id)a0 inDirection:(long long)a1;
- (id)formattedValue:(id)a0 withItem:(id)a1;

@end
