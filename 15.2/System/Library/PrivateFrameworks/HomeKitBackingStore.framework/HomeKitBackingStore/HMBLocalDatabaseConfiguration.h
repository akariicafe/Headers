@class HMBModelContainer;

@interface HMBLocalDatabaseConfiguration : HMFObject <NSCopying>

@property (nonatomic) BOOL readOnly;
@property (retain, nonatomic) HMBModelContainer *modelContainer;

- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
