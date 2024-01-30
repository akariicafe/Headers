@interface PPFlightEventsAggregator : PPEventsAggregator

- (id)_multiDestinationsFlights;
- (id)_returningFlightForFlight:(id)a0 inPool:(id)a1;
- (id)_simpleRoundTripFlights;
- (BOOL)isEvent:(id)a0 dupeOfEvent:(id)a1;
- (id)tripCandidatesFromEventsPool;

@end
