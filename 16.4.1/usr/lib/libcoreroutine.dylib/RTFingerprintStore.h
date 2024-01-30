@class NSString;

@interface RTFingerprintStore : RTStore <RTEnumerableStore>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)fetchRequestFromOptions:(id)a0 offset:(unsigned long long)a1 error:(id *)a2;
- (void)clearWithHandler:(id /* block */)a0;
- (void)_appendWiFiAccessPointsToLastFingerprint:(id)a0 handler:(id /* block */)a1;
- (void)_fetchFingerprintsBetweenStartDate:(id)a0 endDate:(id)a1 filteredBySettledState:(unsigned long long)a2 handler:(id /* block */)a3;
- (void)_fetchWifiAccessPointsForFingerprint:(id)a0 fetchLimit:(unsigned long long)a1 handler:(id /* block */)a2;
- (void)appendWiFiAccessPointsToLastFingerprint:(id)a0 handler:(id /* block */)a1;
- (void)fetchFingerprintsBetweenStartDate:(id)a0 endDate:(id)a1 filteredBySettledState:(unsigned long long)a2 handler:(id /* block */)a3;
- (void)fetchWifiAccessPointsForFingerprint:(id)a0 fetchLimit:(unsigned long long)a1 handler:(id /* block */)a2;
- (void)purgePredating:(id)a0 handler:(id /* block */)a1;
- (void)storeFingerprints:(id)a0 handler:(id /* block */)a1;

@end
