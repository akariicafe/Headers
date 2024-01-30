@class NSArray, NSMutableDictionary, NSDate, NSMutableArray;

@interface MPStoreItemMetadataResponse : NSObject <NSCopying> {
    NSMutableDictionary *_itemIdentifierToStoreItemMetadata;
    NSMutableArray *_allStoreItemDictionaries;
}

@property (nonatomic, getter=isFinalResponse) BOOL finalResponse;
@property (copy, nonatomic) NSArray *cacheMissItemIdentifiers;
@property (copy, nonatomic) NSArray *requestItemIdentifiers;
@property (copy, nonatomic) NSArray *lastBatchItemIdentifiers;
@property (readonly, copy, nonatomic) NSArray *allStoreItemDictionaries;
@property (readonly, copy, nonatomic) NSArray *itemIdentifiers;
@property (readonly, copy, nonatomic) NSDate *earliestExpirationDate;
@property (readonly, nonatomic, getter=isExpired) BOOL expired;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setStoreItemMetadata:(id)a0 forItemIdentifier:(id)a1;
- (id)storeItemMetadataForItemIdentifier:(id)a0 returningIsFinalMetadata:(BOOL *)a1;
- (id)storeItemMetadataForItemIdentifier:(id)a0;

@end
