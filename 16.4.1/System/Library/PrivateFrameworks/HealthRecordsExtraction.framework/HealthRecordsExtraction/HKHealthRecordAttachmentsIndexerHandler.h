@class HKClinicalDocumentIndexingRequest, NSError, HKClinicalDocumentIndexingResult;

@interface HKHealthRecordAttachmentsIndexerHandler : NSObject {
    void /* unknown type, empty encoding */ $__lazy_storage_$_indexer;
}

- (id)init;
- (void).cxx_destruct;
- (void)fetchSpotlightSearchResultsForQueryString:(id)a0 completion:(id /* block */)a1;
- (void)indexWithRequest:(HKClinicalDocumentIndexingRequest *)a0 completion:(void (^)(HKClinicalDocumentIndexingResult *, NSError *))a1;

@end
