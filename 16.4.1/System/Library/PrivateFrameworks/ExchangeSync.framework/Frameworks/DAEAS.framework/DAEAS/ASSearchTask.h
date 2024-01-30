@class DASearchQuery;

@interface ASSearchTask : ASTask

@property (retain, nonatomic) DASearchQuery *query;
@property (nonatomic) int numDownloadedElements;

- (id)initWithQuery:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (int)commandCode;
- (long long)taskStatusForExchangeStatus:(int)a0;

@end
