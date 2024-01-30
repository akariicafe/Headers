@class NSArray, NSOrderedSet, FCCurrentIssuesCheckerResult;

@interface FCCurrentIssuesPromiseChainingData : NSObject

@property (retain, nonatomic) NSArray *resultingIssues;
@property (retain, nonatomic) NSOrderedSet *bundleChannelIDs;
@property (retain, nonatomic) NSArray *followedChannelIDs;
@property (retain, nonatomic) NSArray *autoFavoriteTagIDs;
@property (retain, nonatomic) FCCurrentIssuesCheckerResult *partialResult;

- (void).cxx_destruct;

@end
