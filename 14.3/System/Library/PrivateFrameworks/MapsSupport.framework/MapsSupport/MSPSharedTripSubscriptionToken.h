@class NSString;

@interface MSPSharedTripSubscriptionToken : NSObject {
    NSString *_sharedTripIdentifier;
    id /* block */ _invalidationHandler;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithSharedTripIdentifier:(id)a0 invalidationHandler:(id /* block */)a1;

@end
