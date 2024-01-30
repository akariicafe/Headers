@class NSDictionary;

@interface WLKSearchWatchListRequest : WLKRequest

@property (readonly, copy, nonatomic) NSDictionary *query;

- (void).cxx_destruct;
- (void)makeRequestWithCompletion:(id /* block */)a0;
- (id)initWithQuery:(id)a0;

@end
