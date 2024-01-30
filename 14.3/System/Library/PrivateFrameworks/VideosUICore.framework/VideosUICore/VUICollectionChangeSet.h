@class VUICollectionChange, NSArray;

@interface VUICollectionChangeSet : NSObject

@property (readonly, nonatomic) BOOL hasChanges;
@property (retain, nonatomic) VUICollectionChange *deleteChange;
@property (retain, nonatomic) VUICollectionChange *insertChange;
@property (copy, nonatomic) NSArray *moveChanges;
@property (copy, nonatomic) NSArray *updateChanges;

- (void).cxx_destruct;
- (id)description;
- (id)_changesKinds;
- (BOOL)containsOnlyChangeKind:(unsigned long long)a0;

@end
