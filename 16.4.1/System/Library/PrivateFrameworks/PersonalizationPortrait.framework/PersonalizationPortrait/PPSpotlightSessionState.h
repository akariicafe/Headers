@class NSMutableArray;

@interface PPSpotlightSessionState : NSObject

@property (retain, nonatomic) NSMutableArray *seenSpotlightIds;
@property (retain, nonatomic) NSMutableArray *seenBundleIds;
@property (retain, nonatomic) NSMutableArray *engagedSpotlightIds;
@property (retain, nonatomic) NSMutableArray *engagedBundleIds;

- (id)init;
- (void).cxx_destruct;

@end
