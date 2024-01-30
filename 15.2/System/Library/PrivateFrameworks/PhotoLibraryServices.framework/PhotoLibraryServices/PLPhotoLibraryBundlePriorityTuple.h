@class PLPhotoLibraryBundle;

@interface PLPhotoLibraryBundlePriorityTuple : NSObject

@property (readonly, nonatomic) PLPhotoLibraryBundle *bundle;
@property (readonly, nonatomic) long long priority;

- (id)initWithBundle:(id)a0 priority:(long long)a1;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
