@class GEOAddressObject, NSString, NSDictionary, GEOMapItemClientAttributes, NSDate, GEOPlace;

@interface GEOMapItemCoreRoutineEvent : GEOBaseMapItem {
    NSDictionary *_addressDictionary;
    GEOMapItemClientAttributes *_clientAttributes;
    GEOPlace *_place;
    NSString *_eventName;
    NSString *_eventTitle;
    NSDate *_eventDate;
    BOOL _eventIsAllDay;
    struct { double latitude; double longitude; } _coordinate;
    GEOAddressObject *_addressObject;
}

- (BOOL)_hasResolvablePartialInformation;
- (id)addressObject;
- (id)eventDate;
- (id)initWithAddressDictionary:(id)a0 eventName:(id)a1 eventTitle:(id)a2 eventDate:(id)a3 eventIsAllDay:(BOOL)a4 coordinate:(struct { double x0; double x1; })a5 clientAttributes:(id)a6;
- (BOOL)_responseStatusIsIncomplete;
- (id)geoAddress;
- (id)_clientAttributes;
- (id)eventName;
- (id)weatherDisplayName;
- (id)addressDictionary;
- (id)_place;
- (BOOL)isEventAllDay;
- (void).cxx_destruct;
- (BOOL)isValid;
- (id)description;
- (struct { double x0; double x1; })coordinate;
- (id)name;

@end
