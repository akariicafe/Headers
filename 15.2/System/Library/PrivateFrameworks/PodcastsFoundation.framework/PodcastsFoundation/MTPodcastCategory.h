@class NSString;

@interface MTPodcastCategory : NSManagedObject

@property (retain, nonatomic) NSString *categoryUuid;
@property (retain, nonatomic) NSString *podcastUuid;

@end
