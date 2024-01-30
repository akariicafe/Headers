@class NSArray, NSError;

@interface FCCurrentIssuesCheckerResult : NSObject

@property (retain, nonatomic) NSArray *followedIssues;
@property (retain, nonatomic) NSArray *unreadFollowedIssues;
@property (retain, nonatomic) NSArray *autoFavoriteIssues;
@property (retain, nonatomic) NSArray *unbadgedIssues;
@property (retain, nonatomic) NSArray *seenIssues;
@property (retain, nonatomic) NSError *error;

- (void).cxx_destruct;

@end
