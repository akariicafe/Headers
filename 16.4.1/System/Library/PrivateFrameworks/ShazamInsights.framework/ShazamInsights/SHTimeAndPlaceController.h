@protocol SHDataFetcher;

@interface SHTimeAndPlaceController : NSObject

@property (readonly, nonatomic) id<SHDataFetcher> dataFetcher;

- (void).cxx_destruct;
- (void)affinityGroupsFromData:(id)a0 atLocation:(id)a1 onDate:(id)a2 completionHandler:(id /* block */)a3;

@end
