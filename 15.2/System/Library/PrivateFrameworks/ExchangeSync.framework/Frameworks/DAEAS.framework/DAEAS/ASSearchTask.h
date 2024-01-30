@class DASearchQuery;

@interface ASSearchTask : ASTask

@property (retain, nonatomic) DASearchQuery *query;
@property (nonatomic) int numDownloadedElements;

- (id)initWithQuery:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (long long)taskStatusForExchangeStatus:(int)a0;
- (int)commandCode;

@end
