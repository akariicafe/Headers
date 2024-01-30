@class SGLazyPurgeableResult, _PASNotificationToken;
@protocol SGSeekable;

@interface SGFlightData : NSObject {
    id<SGSeekable> _flightsFh;
    SGLazyPurgeableResult *_flightDataOffsets;
    id<SGSeekable> _flightsUpdateFh;
    SGLazyPurgeableResult *_flightUpdateDataOffsets;
    id<SGSeekable> _airportsFh;
    SGLazyPurgeableResult *_airportDataOffsets;
    id<SGSeekable> _airportsUpdateFh;
    SGLazyPurgeableResult *_airportUpdateDataOffsets;
    _PASNotificationToken *_assetUpdateToken;
    SGLazyPurgeableResult *_carrierNames;
    SGLazyPurgeableResult *_carrierCodesByName;
    SGLazyPurgeableResult *_carrierUpdateNames;
    SGLazyPurgeableResult *_carrierUpdateCodesByName;
}

+ (id)sharedInstance;
+ (id)sanitizeAirportName:(id)a0;
+ (id)airportNameNoiseKeywords;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)updateFlights;
- (void)updateAirports;
- (void)updateCarriers;
- (id)airportIataCodesForDataOffset:(id)a0;
- (id)airportIataCodes;
- (id)namesForAirport:(id)a0 withDataOffset:(id)a1 andFileHandle:(id)a2;
- (id)namesForAirport:(id)a0;
- (id)bestLocalizedNameForAirport:(id)a0;
- (id)timezoneOlsonCodeForAirport:(id)a0 withDataOffset:(id)a1 andFileHandle:(id)a2;
- (id)timezoneOlsonCodeForAirport:(id)a0;
- (id)latitudeAndLongitudeForAirport:(id)a0 withDataOffset:(id)a1 andFileHandle:(id)a2;
- (id)latitudeAndLongitudeForAirport:(id)a0;
- (id)carrierIataCodes;
- (id)carrierIataCodeForCarrierName:(id)a0;
- (id)nameForCarrier:(id)a0;
- (id)airportsServicedByCarrier:(id)a0 flightNumber:(unsigned short)a1 withDataOffset:(id)a2 andFileHandle:(id)a3;
- (id)airportsServicedByCarrier:(id)a0 flightNumber:(unsigned short)a1;
- (id)airportCodeForAirportName:(id)a0 flightCarrier:(id)a1 flightNumber:(unsigned short)a2 outputInfos:(id)a3;
- (id)airportCodeForAirportName:(id)a0 flightCarrier:(id)a1 flightNumber:(unsigned short)a2 otherKnownFlightsToAirport:(id)a3 outputInfos:(id)a4;

@end
