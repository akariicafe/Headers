@class HDPeriodicActivity, NSUUID, NSString, NSDate;

@interface HDCloudSyncContext : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSUUID *identifier;
@property (readonly, copy, nonatomic) NSString *shortIdentifier;
@property (readonly, nonatomic) long long purpose;
@property (readonly, nonatomic) unsigned long long options;
@property (readonly, nonatomic) long long reason;
@property (readonly, nonatomic) HDPeriodicActivity *periodicActivity;
@property (copy, nonatomic) NSDate *unitTest_syncDateOverride;

- (BOOL)isEquivalent:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)initForPurpose:(long long)a0 options:(unsigned long long)a1 reason:(long long)a2 periodicActivity:(id)a3;
- (id)subContextByAddingOptions:(unsigned long long)a0;
- (id)subContextByRemovingOptions:(unsigned long long)a0;

@end
