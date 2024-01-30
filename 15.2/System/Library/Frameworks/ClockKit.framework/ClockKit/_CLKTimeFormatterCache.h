@class NSMutableDictionary;

@interface _CLKTimeFormatterCache : NSObject {
    NSMutableDictionary *_timeOnlyFormatters;
    NSMutableDictionary *_timeAndDesignatorFormatters;
    NSMutableDictionary *_timeAndDesignatorFormattersSuppressingWhitespace;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _cacheLock;
}

+ (id)sharedInstance;
+ (id)timeZoneName:(id)a0;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)_invalidateFormatters;
- (id)timeOnlyFormatterForTimeZone:(id)a0 hasSeconds:(BOOL)a1 forcesLatinNumbers:(BOOL)a2;
- (id)timeAndDesignatorFormatterForTimeZone:(id)a0 suppressWhitespace:(BOOL)a1 forcesLatinNumbers:(BOOL)a2;

@end
