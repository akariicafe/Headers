@class HMBModelContainer;

@interface HMBLocalDatabaseConfiguration : HMFObject <NSCopying>

@property (nonatomic) BOOL readOnly;
@property (retain, nonatomic) HMBModelContainer *modelContainer;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;

@end
