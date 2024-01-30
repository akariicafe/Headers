@interface PPFlightEventsAggregator : PPEventsAggregator

- (id)tripCandidatesFromEventsPool;
- (BOOL)isEvent:(id)a0 dupeOfEvent:(id)a1;
- (id)_simpleRoundTripFlights;
- (id)_multiDestinationsFlights;
- (id)_returningFlightForFlight:(id)a0 inPool:(id)a1;

@end
