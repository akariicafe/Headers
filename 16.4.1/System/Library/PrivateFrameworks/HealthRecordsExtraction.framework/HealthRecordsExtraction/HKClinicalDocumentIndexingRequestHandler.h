@interface HKClinicalDocumentIndexingRequestHandler : NSObject

- (void)fetchSpotlightSearchResultsForQueryString:(id)a0 completion:(id /* block */)a1;
- (void)indexClinicalDocumentsWithRequest:(id)a0 completion:(id /* block */)a1;

@end
