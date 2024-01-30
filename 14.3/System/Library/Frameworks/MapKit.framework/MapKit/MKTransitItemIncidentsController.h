@class NSArray, NSMutableDictionary, NSSet, NSDate, MKMapItem;
@protocol GEOTransitLineItem;

@interface MKTransitItemIncidentsController : NSObject {
    MKMapItem *_mapItem;
    id<GEOTransitLineItem> _lineItem;
    NSArray *_validIncidents;
    NSMutableDictionary *_incidentsForDepartureSequence;
    NSMutableDictionary *_incidentsForSystem;
    NSMutableDictionary *_incidentsForLine;
    NSMutableDictionary *_incidentsForMapItem;
    NSSet *_blockedIncidentEntities;
}

@property (retain, nonatomic) NSDate *referenceDate;

- (void).cxx_destruct;
- (id)_incidentsAffectingMuid:(unsigned long long)a0;
- (id)incidentsForSystem:(id)a0;
- (id)incidentsForLine:(id)a0;
- (id)initWithLineItem:(id)a0;
- (id)validIncidents;
- (id)incidentsForMapItem:(id)a0;
- (id)incidentsForDepartureSequence:(id)a0;
- (id)blockedIncidentEntities;
- (id)initWithMapItem:(id)a0;
- (void)resetCache;

@end
