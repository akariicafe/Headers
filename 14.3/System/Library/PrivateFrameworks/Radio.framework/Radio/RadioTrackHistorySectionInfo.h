@class NSString, NSArray;

@interface RadioTrackHistorySectionInfo : NSObject <NSCopying, NSFetchedResultsSectionInfo, NSMutableCopying>

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *indexTitle;
@property (readonly, nonatomic) unsigned long long numberOfObjects;
@property (readonly, nonatomic) NSArray *objects;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;

@end
