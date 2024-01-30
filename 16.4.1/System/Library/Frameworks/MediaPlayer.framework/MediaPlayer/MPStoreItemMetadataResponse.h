@class NSArray, NSMutableDictionary, ICURLAggregatedPerformanceMetrics, NSDate;

@interface MPStoreItemMetadataResponse : NSObject <NSCopying> {
    NSMutableDictionary *_itemIdentifierToStoreItemMetadata;
}

@property (nonatomic, getter=isFinalResponse) BOOL finalResponse;
@property (copy, nonatomic) NSArray *cacheMissItemIdentifiers;
@property (copy, nonatomic) NSArray *requestItemIdentifiers;
@property (copy, nonatomic) NSArray *lastBatchItemIdentifiers;
@property (readonly, copy, nonatomic) NSArray *lastBatchStoreItemDictionaries;
@property (retain, nonatomic) ICURLAggregatedPerformanceMetrics *performanceMetrics;
@property (readonly, copy, nonatomic) NSArray *itemIdentifiers;
@property (readonly, copy, nonatomic) NSDate *earliestExpirationDate;
@property (readonly, nonatomic, getter=isExpired) BOOL expired;

- (void)setStoreItemMetadata:(id)a0 forItemIdentifier:(id)a1;
- (id)storeItemMetadataForItemIdentifier:(id)a0 returningIsFinalMetadata:(BOOL *)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)storeItemMetadataForItemIdentifier:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
