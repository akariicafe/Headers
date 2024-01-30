@class _HDDataFaker;

@interface HDDemoManager : NSObject {
    _HDDataFaker *_faker;
}

- (void).cxx_destruct;
- (void)stopFakingData;
- (void)startFakingDataForActivityType:(long long)a0 speed:(id)a1 objectHandler:(id /* block */)a2;
- (void)generateFakeDataForActivityType:(long long)a0 minutes:(double)a1 objectHandler:(id /* block */)a2 completion:(id /* block */)a3;
- (BOOL)isProvidingData;

@end
