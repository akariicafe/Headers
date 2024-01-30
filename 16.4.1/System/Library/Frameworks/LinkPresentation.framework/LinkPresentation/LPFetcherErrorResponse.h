@class NSError;

@interface LPFetcherErrorResponse : LPFetcherResponse

@property (readonly, retain, nonatomic) NSError *error;

- (void).cxx_destruct;
- (id)initWithError:(id)a0 fetcher:(id)a1;

@end
