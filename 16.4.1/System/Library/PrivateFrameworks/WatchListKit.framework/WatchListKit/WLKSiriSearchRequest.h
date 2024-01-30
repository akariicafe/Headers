@class NSDictionary;

@interface WLKSiriSearchRequest : WLKRequest

@property (readonly, copy, nonatomic) NSDictionary *query;

- (id)initWithQuery:(id)a0;
- (void).cxx_destruct;
- (void)makeRequestWithCompletion:(id /* block */)a0;

@end
