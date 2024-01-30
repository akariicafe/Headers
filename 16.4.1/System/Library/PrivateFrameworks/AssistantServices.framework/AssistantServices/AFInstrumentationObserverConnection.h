@class NSString, NSSet, AFAnalyticsObserverConnection;

@interface AFInstrumentationObserverConnection : NSObject <AFInvalidating> {
    AFAnalyticsObserverConnection *_observerConnection;
    NSSet *_filteredTagIdentifiers;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)flushWithCompletion:(id /* block */)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (id)initWithObservation:(id /* block */)a0;
- (id)initWithObservation:(id /* block */)a0 filterByInstrumentationTypes:(id)a1;
- (void)waitUntilInvalidated;

@end
