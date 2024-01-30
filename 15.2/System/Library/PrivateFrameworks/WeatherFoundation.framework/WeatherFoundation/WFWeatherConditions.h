@class WFLocation, NSCalendar, NSMutableDictionary;

@interface WFWeatherConditions : NSObject <NSCopying, NSSecureCoding> {
    WFLocation *_location;
}

@property (class, readonly) NSCalendar *calendar;
@property (class, readonly) unsigned long long dateComponentCalendarUnits;
@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableDictionary *components;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } componentsLock;
@property (copy) WFLocation *location;
@property (getter=isNightForecast) BOOL nightForecast;

- (BOOL)wf_isDayIfSunrise:(id)a0 sunset:(id)a1;
- (id)valueForComponent:(id)a0;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (void)setValueSync:(id)a0 forComponent:(id)a1;
- (id)valueForComponentSync:(id)a0;
- (id)allComponents;
- (id)description;
- (BOOL)wf_isDay;
- (void).cxx_destruct;
- (void)editLinksWithLocale:(id)a0 trackingParameter:(id)a1;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_commonInit;
- (void)setValue:(id)a0 forComponent:(id)a1;
- (id)dictionaryRepresentation;
- (id)objectForKeyedSubscript:(id)a0;

@end
