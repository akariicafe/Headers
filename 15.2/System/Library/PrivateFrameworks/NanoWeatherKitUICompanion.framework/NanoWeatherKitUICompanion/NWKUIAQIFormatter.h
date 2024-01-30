@class NSNumberFormatter;

@interface NWKUIAQIFormatter : NSObject {
    NSNumberFormatter *_formatter;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly) NWKUIAQIFormatter *autoupdatingSharedFormatter;

- (id)initWithLocale:(id)a0;
- (void)_localeChanged:(id)a0;
- (void).cxx_destruct;
- (void)_reloadWithLocale:(id)a0;
- (id)formattedIndexFromAirQualityConditions:(id)a0;

@end
