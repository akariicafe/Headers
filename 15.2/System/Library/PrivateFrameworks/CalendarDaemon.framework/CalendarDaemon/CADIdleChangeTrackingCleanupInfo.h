@interface CADIdleChangeTrackingCleanupInfo : NSObject

@property (nonatomic) double languishPeriod;
@property (nonatomic) int numberOfChanges;

+ (id)serverIdleChangeTrackingCleanupInfo;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithLanguishPeriod:(double)a0 numberOfChanges:(int)a1;
- (BOOL)isEqualToInfo:(id)a0;

@end
