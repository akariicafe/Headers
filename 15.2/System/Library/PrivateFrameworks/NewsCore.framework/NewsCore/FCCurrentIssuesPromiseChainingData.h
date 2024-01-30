@class NSArray, NSOrderedSet, FCCurrentIssuesCheckerResult;

@interface FCCurrentIssuesPromiseChainingData : NSObject {
    NSArray *_resultingIssues;
    NSOrderedSet *_bundleChannelIDs;
    NSArray *_followedChannelIDs;
    NSArray *_autoFavoriteTagIDs;
    FCCurrentIssuesCheckerResult *_partialResult;
}

- (void).cxx_destruct;

@end
