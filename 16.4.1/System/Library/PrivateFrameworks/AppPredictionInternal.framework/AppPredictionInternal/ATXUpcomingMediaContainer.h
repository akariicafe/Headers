@class NSMutableDictionary, NSMutableArray;

@interface ATXUpcomingMediaContainer : NSObject {
    NSMutableArray *_maybeSortedUpcomingMedia;
    BOOL _sorted;
}

@property (readonly, nonatomic) NSMutableDictionary *itemExpiredUpcomingMedia;
@property (readonly, nonatomic) NSMutableDictionary *itemValidUpcomingMedia;
@property (readonly, nonatomic) NSMutableDictionary *containerExpiredUpcomingMedia;
@property (readonly, nonatomic) NSMutableDictionary *containerValidUpcomingMedia;
@property (readonly, nonatomic) NSMutableDictionary *bucketExpiredUpcomingMedia;
@property (readonly, nonatomic) NSMutableDictionary *bucketValidUpcomingMedia;
@property (readonly, nonatomic) NSMutableArray *sortedUpcomingMedia;
@property (nonatomic) BOOL preferUpcomingMediaForPredictions;
@property (nonatomic) BOOL preferenceForUpcomingMediaIsSet;
@property (nonatomic) BOOL isInternalApplication;

+ (void)addToDictionary:(id)a0 key:(id)a1 value:(id)a2;

- (id)init;
- (void).cxx_destruct;
- (void)addUpcomingMediaIntent:(id)a0 withRank:(id)a1;
- (BOOL)appSupportsUpcomingMedia;

@end
