@interface CKDPQLUpgradeInfo : NSObject

@property (nonatomic) unsigned long long version;
@property (nonatomic) void /* function */ *upgradeFunction;
@property (nonatomic) BOOL shouldVacuum;
@property (nonatomic) BOOL shouldTruncateDatabase;

+ (id)upgradeInfoWithVersion:(unsigned long long)a0 function:(void /* function */ *)a1 shouldVacuum:(BOOL)a2 shouldTruncate:(BOOL)a3;

- (id)initWithVersion:(unsigned long long)a0 function:(void /* function */ *)a1 shouldVacuum:(BOOL)a2 shouldTruncate:(BOOL)a3;

@end
