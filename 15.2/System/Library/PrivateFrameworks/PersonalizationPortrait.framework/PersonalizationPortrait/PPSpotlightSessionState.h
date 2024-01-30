@class NSMutableArray;

@interface PPSpotlightSessionState : NSObject

@property (retain, nonatomic) NSMutableArray *seenSpotlightIds;
@property (retain, nonatomic) NSMutableArray *seenBundleIds;
@property (retain, nonatomic) NSMutableArray *engagedSpotlightIds;
@property (retain, nonatomic) NSMutableArray *engagedBundleIds;

- (void).cxx_destruct;
- (id)init;

@end
