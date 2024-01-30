@interface QueryStatusExResults : NSObject

@property unsigned int qStatus;
@property unsigned int cFilteredDocuments;
@property unsigned int cDocumentsToFilter;
@property unsigned int dwRatioFinishedDenominator;
@property unsigned int dwRatioFinishedNumerator;
@property unsigned int rowsetBookMark;
@property unsigned int cRowsTotal;
@property unsigned int maxRank;
@property unsigned int cResultsFound;
@property unsigned int whereID;

- (id)init;

@end
