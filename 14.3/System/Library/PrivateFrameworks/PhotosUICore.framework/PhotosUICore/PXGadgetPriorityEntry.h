@class NSDate;
@protocol PXForYouRankable;

@interface PXGadgetPriorityEntry : NSObject

@property (retain, nonatomic) id<PXForYouRankable> rankable;
@property (retain, nonatomic) NSDate *cachedPriorityDate;
@property (nonatomic) long long currentRank;

- (void).cxx_destruct;

@end
