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

- (id)geoAddress;
- (id)addressDictionary;
- (BOOL)_hasResolvablePartialInformation;
- (BOOL)isEventAllDay;
- (BOOL)_responseStatusIsIncomplete;
- (id)eventDate;
- (id)_place;
- (id)_clientAttributes;
- (id)weatherDisplayName;
- (id)addressObject;
- (id)eventName;
- (struct { double x0; double x1; })coordinate;
- (BOOL)isValid;
- (id)description;
- (void).cxx_destruct;
- (id)name;
- (id)initWithAddressDictionary:(id)a0 eventName:(id)a1 eventTitle:(id)a2 eventDate:(id)a3 eventIsAllDay:(BOOL)a4 coordinate:(struct { double x0; double x1; })a5 clientAttributes:(id)a6;

@end
