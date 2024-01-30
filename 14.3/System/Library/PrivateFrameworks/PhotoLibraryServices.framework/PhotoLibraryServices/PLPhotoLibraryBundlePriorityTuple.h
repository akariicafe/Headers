@class PLPhotoLibraryBundle;

@interface PLPhotoLibraryBundlePriorityTuple : NSObject

@property (readonly, nonatomic) PLPhotoLibraryBundle *bundle;
@property (readonly, nonatomic) unsigned long long priority;

- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithBundle:(id)a0 priority:(unsigned long long)a1;

@end
