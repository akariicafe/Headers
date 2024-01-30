@interface DBDashboardSiriEntity : DBDashboardEntity

@property (nonatomic, getter=isFloating) BOOL floating;

+ (id)entity;

- (BOOL)isSiriEntity;

@end
