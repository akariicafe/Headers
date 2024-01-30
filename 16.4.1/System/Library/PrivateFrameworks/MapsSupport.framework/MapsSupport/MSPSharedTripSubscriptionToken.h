@class NSString;

@interface MSPSharedTripSubscriptionToken : NSObject {
    NSString *_sharedTripIdentifier;
    id /* block */ _invalidationHandler;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithSharedTripIdentifier:(id)a0 invalidationHandler:(id /* block */)a1;

@end
