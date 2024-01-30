@interface LPFetcherResponse : NSObject

@property (readonly, nonatomic) long long state;
@property (readonly, retain, nonatomic) id userData;

- (void).cxx_destruct;
- (id)initWithState:(long long)a0 fetcher:(id)a1;

@end
