@class NSData, SHGroupMO, SHTrackMO;

@interface SHMetadataMO : NSManagedObject

@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) SHGroupMO *group;
@property (retain, nonatomic) SHTrackMO *track;

+ (id)fetchRequest;

@end
