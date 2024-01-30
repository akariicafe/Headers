@class NSMutableArray;

@interface ANAnalyticsGroup : NSObject

@property (readonly, nonatomic) NSMutableArray *announcements;
@property (readonly, nonatomic) NSMutableArray *metadata;

- (void).cxx_destruct;
- (id)init;
- (void)addAnnouncement:(id)a0 metadata:(id)a1;

@end
