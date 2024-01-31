@class UIColor, NSArray, NSString, CLKTextProviderCache, NSMutableDictionary, NSMutableArray, CLKClockTimerToken;

@interface CLKTextProvider : NSObject <NSSecureCoding, NSCopying> {
    CLKTextProviderCache *_defaultCache;
    NSMutableDictionary *_cachesByKey;
    NSMutableArray *_recentCacheKeys;
    unsigned long long _nextUpdateToken;
    NSMutableDictionary *_updateHandlersByToken;
    CLKClockTimerToken *_secondTimerToken;
    CLKClockTimerToken *_minuteTimerToken;
    CLKClockTimerToken *_30fpsTimerToken;
    BOOL _finalized;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL ignoreUppercaseStyle;
@property (nonatomic) BOOL paused;
@property (nonatomic) BOOL italicized;
@property (nonatomic) BOOL monospacedNumbers;
@property (nonatomic) long long shrinkTextPreference;
@property (copy, nonatomic) NSArray *fontFeatures;
@property (nonatomic) long long timeTravelUpdateFrequency;
@property (readonly, nonatomic) long long updateFrequency;
@property (retain, nonatomic) UIColor *tintColor;
@property (copy, nonatomic) NSString *accessibilityLabel;

+ (id)new;
+ (id)providerWithJSONObjectRepresentation:(id)a0;
+ (id)textProviderWithFormat:(id)a0;
+ (id)localizableTextProviderWithStringsFileFormatKey:(id)a0 textProviders:(id)a1;
+ (id)localizableTextProviderWithStringsFileTextKey:(id)a0;
+ (id)localizableTextProviderWithStringsFileTextKey:(id)a0 shortTextKey:(id)a1;
+ (id)textProviderWithFormat:(id)a0 arguments:(char *)a1;

- (id)initPrivate;
- (void)_localeChanged;
- (void)_update;
- (BOOL)validate;
- (id)init;
- (unsigned long long)hash;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)attributedString;
- (void)finalize;
- (id)_description;
- (id)description;
- (void).cxx_destruct;
- (void)_endSession;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_commonInit;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_validate;
- (void)_startSessionWithDate:(id)a0;
- (id)_timeFormatByRemovingDesignatorOfTimeFormat:(id)a0;
- (id)_timeFormatByRemovingWhitespaceAroundDesignatorOfTimeFormat:(id)a0 andRemovingDesignator:(BOOL)a1 designatorExists:(BOOL *)a2;
- (id)_timeFormatByRemovingWhitespaceAroundDesignatorOfTimeFormat:(id)a0 designatorExists:(BOOL *)a1;
- (long long)_updateFrequency;
- (id)startUpdatesWithHandler:(id /* block */)a0;
- (id)JSONObjectRepresentation;
- (id)finalizedCopy;
- (id)localizedTextProviderWithBundle:(id)a0 forLocalization:(id)a1;
- (void)stopUpdatesForToken:(id)a0;
- (id)attributedTextAndSize:(struct CGSize { double x0; double x1; } *)a0 forMaxWidth:(double)a1 withStyle:(id)a2 now:(id)a3;
- (struct CGSize { double x0; double x1; })minimumSizeWithStyle:(id)a0 now:(id)a1;
- (id)_cacheForKey:(id)a0;
- (id)_defaultCache;
- (id)_initWithJSONObjectRepresentation:(id)a0;
- (id)_italicize:(id)a0;
- (id)_localizedTextProviderWithBundle:(id)a0 forLocalization:(id)a1;
- (void)_maybeStartOrStopUpdates;
- (id)_monospacedNumbers:(id)a0;
- (void)_pruneCacheKeysIfNecessary;
- (id)_sessionAttributedTextForIndex:(unsigned long long)a0 withStyle:(id)a1;
- (id)_sessionCacheKey;
- (id)sessionAttributedTextForIndex:(unsigned long long)a0 withStyle:(id)a1;

@end
