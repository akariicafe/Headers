@class NSMutableArray;

@interface ANAnalyticsGroup : NSObject

@property (readonly, nonatomic) NSMutableArray *announcements;
@property (readonly, nonatomic) NSMutableArray *metadata;

- (id)init;
- (void).cxx_destruct;
- (void)addAnnouncement:(id)a0 metadata:(id)a1;

@end
