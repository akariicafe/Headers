@class NSSet, NSMutableSet, NSMutableDictionary;

@interface PXIDSAddressQuery : NSObject {
    unsigned long long _destinationsCount;
    NSMutableSet *_mutableRemainingDestinations;
    NSMutableDictionary *_mutableStashedResults;
    unsigned long long _resultsCount;
}

@property (readonly, copy, nonatomic) id /* block */ resultHandler;
@property (readonly, copy, nonatomic) NSSet *remainingDestinations;
@property (readonly, nonatomic) BOOL isComplete;

- (void).cxx_destruct;
- (id)initWithDestinations:(id)a0 resultHandler:(id /* block */)a1;
- (id)popStashedResults;
- (void)stashDestination:(id)a0 withResult:(BOOL)a1;

@end
