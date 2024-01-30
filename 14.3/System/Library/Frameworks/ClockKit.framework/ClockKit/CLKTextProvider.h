@class UIColor, NSString, NSMutableDictionary, CLKTextProviderCache, NSMutableArray, CLKClockTimerToken;

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
@property (nonatomic) long long timeTravelUpdateFrequency;
@property (readonly, nonatomic) long long updateFrequency;
@property (retain, nonatomic) UIColor *tintColor;
@property (copy, nonatomic) NSString *accessibilityLabel;

+ (id)new;
+ (id)textProviderWithFormat:(id)a0;
+ (id)providerWithJSONObjectRepresentation:(id)a0;
+ (id)localizableTextProviderWithStringsFileTextKey:(id)a0 shortTextKey:(id)a1;
+ (id)localizableTextProviderWithStringsFileTextKey:(id)a0;
+ (id)localizableTextProviderWithStringsFileFormatKey:(id)a0 textProviders:(id)a1;
+ (id)textProviderWithFormat:(id)a0 arguments:(char *)a1;

- (id)_description;
- (id)initPrivate;
- (void)_commonInit;
- (id)_timeFormatByRemovingWhitespaceAroundDesignatorOfTimeFormat:(id)a0 andRemovingDesignator:(BOOL)a1 designatorExists:(BOOL *)a2;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)attributedString;
- (void)dealloc;
- (BOOL)validate;
- (id)startUpdatesWithHandler:(id /* block */)a0;
- (unsigned long long)hash;
- (BOOL)_validate;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)_update;
- (BOOL)isEqual:(id)a0;
- (void)finalize;
- (void)_endSession;
- (void)_localeChanged;
- (void)_startSessionWithDate:(id)a0;
- (long long)_updateFrequency;
- (id)_timeFormatByRemovingDesignatorOfTimeFormat:(id)a0;
- (id)_timeFormatByRemovingWhitespaceAroundDesignatorOfTimeFormat:(id)a0 designatorExists:(BOOL *)a1;
- (void)encodeWithCoder:(id)a0;
- (id)finalizedCopy;
- (void)stopUpdatesForToken:(id)a0;
- (id)attributedTextAndSize:(struct CGSize { double x0; double x1; } *)a0 forMaxWidth:(double)a1 withStyle:(id)a2 now:(id)a3;
- (struct CGSize { double x0; double x1; })minimumSizeWithStyle:(id)a0 now:(id)a1;
- (id)localizedTextProviderWithBundle:(id)a0 forLocalization:(id)a1;
- (id)_sessionAttributedTextForIndex:(unsigned long long)a0 withStyle:(id)a1;
- (id)JSONObjectRepresentation;
- (id)_initWithJSONObjectRepresentation:(id)a0;
- (id)_sessionCacheKey;
- (id)sessionAttributedTextForIndex:(unsigned long long)a0 withStyle:(id)a1;
- (void)_maybeStartOrStopUpdates;
- (id)_localizedTextProviderWithBundle:(id)a0 forLocalization:(id)a1;
- (id)_cacheForKey:(id)a0;
- (id)_italicize:(id)a0;
- (id)_monospacedNumbers:(id)a0;
- (id)_defaultCache;
- (void)_pruneCacheKeysIfNecessary;

@end
