@class NSString, NSArray;

@interface VUIDocumentPreFetchedDataPostPlay : VUIDocumentPreFetchedData

@property (copy, nonatomic) NSString *host;
@property (copy, nonatomic) NSString *productID;
@property (copy, nonatomic) NSString *showID;
@property (copy, nonatomic) NSArray *excludedCanonicals;
@property (nonatomic) BOOL updateEvent;
@property (nonatomic) BOOL canAutoPlay;

- (void).cxx_destruct;
- (id)jsonData;

@end
