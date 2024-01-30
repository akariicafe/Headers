@class NSString, UIColor, NSDictionary;

@interface MKInfoCardThemeManager : NSObject <MKInfoCardTheme> {
    BOOL _themeWasExplicitySet;
    NSDictionary *_colors;
    id /* block */ _tintColorProvider;
}

@property (nonatomic) BOOL useSmallFont;
@property (readonly, nonatomic) unsigned long long themeType;
@property (readonly, nonatomic) NSString *javaScriptName;
@property (readonly, nonatomic) BOOL isDarkTheme;
@property (readonly, nonatomic) UIColor *textColor;
@property (readonly, nonatomic) UIColor *lightTextColor;
@property (readonly, nonatomic) UIColor *tertiaryTextColor;
@property (readonly, nonatomic) UIColor *tintColor;
@property (readonly, nonatomic) UIColor *highlightedTintColor;
@property (readonly, nonatomic) UIColor *separatorLineColor;
@property (readonly, nonatomic) UIColor *rowColor;
@property (readonly, nonatomic) UIColor *selectedRowColor;
@property (readonly, nonatomic) UIColor *disabledActionRowTextColor;
@property (readonly, nonatomic) UIColor *disabledActionRowBackgroundColor;
@property (readonly, nonatomic) UIColor *normalActionRowBackgroundColor;
@property (readonly, nonatomic) UIColor *normalActionRowBackgroundPressedColor;
@property (readonly, nonatomic) UIColor *headerPrimaryButtonNormalColor;
@property (readonly, nonatomic) UIColor *headerPrimaryButtonHighlightedColor;
@property (readonly, nonatomic) UIColor *transitOntimeTextColor;
@property (readonly, nonatomic) UIColor *transitDelayedTextColor;
@property (readonly, nonatomic) UIColor *transitChevronBackgroundColor;
@property (readonly, nonatomic) UIColor *normalBackgroundColor;
@property (readonly, nonatomic) UIColor *buttonNormalColor;
@property (readonly, nonatomic) UIColor *buttonHighlightedColor;
@property (readonly, nonatomic) UIColor *ratingBarStartColor;
@property (readonly, nonatomic) UIColor *ratingBarEndColor;
@property (readonly, nonatomic) UIColor *ratingBarBackgroundColor;
@property (readonly, nonatomic) UIColor *transitIncidentBackgroundColor;
@property (readonly, nonatomic) UIColor *cardBackgroundColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)setTheme:(unsigned long long)a0;
+ (id)currentTheme;
+ (void)setTintColorProvider:(id /* block */)a0;
+ (id)themeWithThemeType:(unsigned long long)a0;
+ (unsigned long long)themeType;

- (void)_setTintColorProvider:(id /* block */)a0;
- (unsigned long long)_currentSystemTheme;
- (BOOL)_isInSpotlightContext;
- (id)init;
- (void)_setTheme:(unsigned long long)a0;
- (id)_initWithThemeType:(unsigned long long)a0;
- (void).cxx_destruct;

@end
