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

- (id)initWithAddressDictionary:(id)a0 eventName:(id)a1 eventTitle:(id)a2 eventDate:(id)a3 eventIsAllDay:(BOOL)a4 coordinate:(struct { double x0; double x1; })a5 clientAttributes:(id)a6;
- (struct { double x0; double x1; })coordinate;
- (BOOL)isEventAllDay;
- (id)weatherDisplayName;
- (id)eventDate;
- (BOOL)_hasResolvablePartialInformation;
- (id)description;
- (id)_place;
- (void).cxx_destruct;
- (id)_clientAttributes;
- (id)addressDictionary;
- (id)eventName;
- (id)name;
- (id)geoAddress;
- (BOOL)_responseStatusIsIncomplete;
- (BOOL)isValid;
- (id)addressObject;

@end
