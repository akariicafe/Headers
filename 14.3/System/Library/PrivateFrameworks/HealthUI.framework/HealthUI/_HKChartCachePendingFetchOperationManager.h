@class NSMutableDictionary;

@interface _HKChartCachePendingFetchOperationManager : NSObject {
    NSMutableDictionary *_fetchOperationsByIdentifier;
    NSMutableDictionary *_fetchOperationsByUUID;
    NSMutableDictionary *_retryCountByIdentifier;
}

- (id)init;
- (void).cxx_destruct;
- (void)addFetchOperation:(id)a0;
- (void)removeFetchOperation:(id)a0;
- (id)fetchOperationForIdentifier:(id)a0;
- (void)incrementRetryCountForIdentifier:(id)a0;
- (long long)retryCountForIdentifier:(id)a0;
- (void)resetRetryCountForIdentifier:(id)a0;
- (id)allPendingIdentifiers;

@end
