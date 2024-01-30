@class NSArray;
@protocol CLSInvestigationItem;

@interface PGKeyCuratorCluster : NSObject

@property (readonly) NSArray *subclusters;
@property (readonly) id<CLSInvestigationItem> keyItem;
@property (readonly) double score;

- (void).cxx_destruct;
- (id)initWithSubclusters:(id)a0 keyItem:(id)a1 score:(double)a2;

@end
