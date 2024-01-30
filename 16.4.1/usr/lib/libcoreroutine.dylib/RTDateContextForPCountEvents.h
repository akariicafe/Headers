@interface RTDateContextForPCountEvents : NSObject

@property (nonatomic) unsigned long long totalCount;
@property (nonatomic) unsigned long long friendCount;
@property (nonatomic) unsigned long long familyCount;

- (id)initWithRelationshipCount:(long long)a0 isStartDate:(BOOL)a1;

@end
