@class NSArray, NSMutableDictionary;

@interface NCNotificationDestinationsRegistry : NSObject

@property (retain, nonatomic) NSMutableDictionary *destinations;
@property (retain, nonatomic) NSMutableDictionary *activeDestinations;
@property (retain, nonatomic) NSMutableDictionary *readyDestinations;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) NSArray *registeredDestinations;

- (void)setDestination:(id)a0 enabled:(BOOL)a1;
- (void)setDestinationWithIdentifier:(id)a0 enabled:(BOOL)a1;
- (BOOL)hasActiveDestinationsForRequest:(id)a0;
- (void)registerDestination:(id)a0;
- (id)destinationsForRequestDestinations:(id)a0;
- (id)readyDestinationsForRequestDestinations:(id)a0;
- (void)unregisterDestinationForIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)destinationIdentifiersForRequestDestinations:(id)a0;
- (BOOL)isRegisteredDestination:(id)a0;
- (id)_destinationsForRequestDestinations:(id)a0 inDestinationDict:(id)a1;
- (void)registerDestination:(id)a0 forIdentifier:(id)a1;
- (void)unregisterDestination:(id)a0;
- (void)setDestination:(id)a0 ready:(BOOL)a1;

@end
