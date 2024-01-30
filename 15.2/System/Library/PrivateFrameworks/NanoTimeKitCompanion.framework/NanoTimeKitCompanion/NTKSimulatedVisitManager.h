@interface NTKSimulatedVisitManager : NTKVisitManager

- (id)init;
- (id)currentVisit;
- (id)startVisitUpdatesWithIdentifier:(id)a0 handler:(id /* block */)a1;
- (void)stopVisitUpdatesForToken:(id)a0;
- (id)previousVisit;

@end
