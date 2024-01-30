@class NSMutableDictionary;

@interface _CLKTimeFormatterCache : NSObject {
    NSMutableDictionary *_timeOnlyFormatters;
    NSMutableDictionary *_timeAndDesignatorFormatters;
    NSMutableDictionary *_timeAndDesignatorFormattersSuppressingWhitespace;
}

+ (id)sharedInstance;
+ (id)timeZoneName:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)_invalidateFormatters;
- (void)dealloc;
- (id)timeOnlyFormatterForTimeZone:(id)a0 hasSeconds:(BOOL)a1 forcesLatinNumbers:(BOOL)a2;
- (id)timeAndDesignatorFormatterForTimeZone:(id)a0 suppressWhitespace:(BOOL)a1 forcesLatinNumbers:(BOOL)a2;

@end
