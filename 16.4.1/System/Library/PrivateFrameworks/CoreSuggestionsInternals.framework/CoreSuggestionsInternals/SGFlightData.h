@class _PASLazyPurgeableResult, _PASNotificationToken;
@protocol SGSeekable;

@interface SGFlightData : NSObject {
    id<SGSeekable> _flightsFh;
    _PASLazyPurgeableResult *_flightDataOffsets;
    id<SGSeekable> _flightsUpdateFh;
    _PASLazyPurgeableResult *_flightUpdateDataOffsets;
    id<SGSeekable> _airportsFh;
    _PASLazyPurgeableResult *_airportDataOffsets;
    id<SGSeekable> _airportsUpdateFh;
    _PASLazyPurgeableResult *_airportUpdateDataOffsets;
    _PASNotificationToken *_assetUpdateToken;
    _PASLazyPurgeableResult *_carrierNames;
    _PASLazyPurgeableResult *_carrierCodesByName;
    _PASLazyPurgeableResult *_carrierUpdateNames;
    _PASLazyPurgeableResult *_carrierUpdateCodesByName;
}

+ (id)sharedInstance;
+ (id)airportNameNoiseKeywords;
+ (id)iataCodeToCityDatabaseDict;
+ (id)sanitizeAirportName:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)latitudeAndLongitudeForAirport:(id)a0;
- (id)nameForCarrier:(id)a0;
- (id)airportCodeForAirportName:(id)a0 flightCarrier:(id)a1 flightNumber:(unsigned short)a2 otherKnownFlightsToAirport:(id)a3 outputInfos:(id)a4;
- (id)airportCodeForAirportName:(id)a0 flightCarrier:(id)a1 flightNumber:(unsigned short)a2 outputInfos:(id)a3;
- (id)airportIataCodes;
- (id)airportIataCodesForDataOffset:(id)a0;
- (id)airportsServicedByCarrier:(id)a0 flightNumber:(unsigned short)a1;
- (id)airportsServicedByCarrier:(id)a0 flightNumber:(unsigned short)a1 withDataOffset:(id)a2 andFileHandle:(id)a3;
- (id)bestLocalizedNameForAirport:(id)a0;
- (id)carrierIataCodeForCarrierName:(id)a0;
- (id)carrierIataCodes;
- (id)cityForIataCode:(id)a0;
- (id)latitudeAndLongitudeForAirport:(id)a0 withDataOffset:(id)a1 andFileHandle:(id)a2;
- (id)namesForAirport:(id)a0;
- (id)namesForAirport:(id)a0 withDataOffset:(id)a1 andFileHandle:(id)a2;
- (id)timezoneOlsonCodeForAirport:(id)a0;
- (id)timezoneOlsonCodeForAirport:(id)a0 withDataOffset:(id)a1 andFileHandle:(id)a2;
- (void)updateAirports;
- (void)updateCarriers;
- (void)updateFlights;

@end
