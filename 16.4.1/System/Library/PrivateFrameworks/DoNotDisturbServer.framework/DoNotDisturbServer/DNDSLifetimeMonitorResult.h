@class NSArray;

@interface DNDSLifetimeMonitorResult : NSObject

@property (readonly, copy, nonatomic) NSArray *activeUUIDs;
@property (readonly, copy, nonatomic) NSArray *expiredUUIDs;

- (id)initWithActiveUUIDs:(id)a0 expiredUUIDs:(id)a1;
- (void).cxx_destruct;

@end
