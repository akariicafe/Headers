@class wspHeader;

@interface wspQueryStatusExOut : NSObject

@property (retain) wspHeader *whdr;
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
- (void).cxx_destruct;
- (int)decodeBuffer:(id)a0 BufferOffset:(unsigned int)a1 BytesDecoded:(unsigned int *)a2;

@end
