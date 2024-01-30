@class NSString, NSArray, MKTransitDepartureServiceGapFormatter, NSMapTable, NSDictionary;

@interface MKTransitDeparturesSectionController : MKTransitSectionController {
    NSString *_direction;
    NSString *_departureSequenceContainer;
    NSArray *_sequences;
    NSMapTable *_sequencesToInclude;
    NSDictionary *_serviceGapStrings;
    BOOL _needsFindRowForServiceGap;
    BOOL _needsFindDeparturesAreVehicleSpecific;
}

@property (retain, nonatomic) MKTransitDepartureServiceGapFormatter *serviceGapFormatter;
@property (readonly, nonatomic) BOOL showOperatingHours;
@property (readonly, nonatomic) BOOL departuresAreVehicleSpecific;

- (id)init;
- (void).cxx_destruct;
- (void)_buildRows;
- (BOOL)_isDateLastDeparture:(id)a0 withNextDepartureDate:(id)a1 forSequence:(id)a2;
- (BOOL)_newStationCardUIEnabled;
- (id)_nextLastDepartureDateForSequence:(id)a0 afterDate:(id)a1;
- (id)_pagingFilter;
- (void)_serviceGapDate:(out id *)a0 string:(out id *)a1 forSequence:(id)a2 withDepartureIndex:(unsigned long long)a3;
- (void)_setNeedsBuildRows;
- (void)_sharedSetup;
- (id)initWithMapItem:(id)a0 system:(id)a1;
- (id)initWithMapItem:(id)a0 system:(id)a1 departureSequenceContainer:(id)a2;
- (id)initWithMapItem:(id)a0 system:(id)a1 direction:(id)a2;
- (id)sequenceForRow:(long long)a0 outIsNewLine:(out BOOL *)a1 outNextLineIsSame:(out BOOL *)a2;
- (id)sequences;
- (id)serviceGapDescriptionForRow:(long long)a0;
- (void)setDepartureCutoffDate:(id)a0;

@end
