@interface NTKVisitManager : NSObject

+ (id)fallbackVisit;
+ (id)sharedVisitManager;

- (id)currentVisit;
- (id)anyVisit;
- (id)startVisitUpdatesWithIdentifier:(id)a0 handler:(id /* block */)a1;
- (void)stopVisitUpdatesForToken:(id)a0;
- (id)previousVisit;

@end
