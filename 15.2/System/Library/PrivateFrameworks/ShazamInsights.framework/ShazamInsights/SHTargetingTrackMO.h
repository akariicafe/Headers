@class NSString;

@interface SHTargetingTrackMO : NSManagedObject

@property (copy, nonatomic) NSString *parent;
@property (copy, nonatomic) NSString *trackKey;

+ (id)fetchRequest;

@end
