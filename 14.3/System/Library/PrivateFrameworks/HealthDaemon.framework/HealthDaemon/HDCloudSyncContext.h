@class NSUUID, NSString, HDPeriodicActivity;

@interface HDCloudSyncContext : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSUUID *identifier;
@property (readonly, copy, nonatomic) NSString *shortIdentifier;
@property (readonly, nonatomic) long long operationType;
@property (readonly, nonatomic) unsigned long long options;
@property (readonly, nonatomic) long long reason;
@property (readonly, nonatomic) HDPeriodicActivity *periodicActivity;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEquivalent:(id)a0;
- (id)description;
- (id)initForOperationType:(long long)a0 options:(unsigned long long)a1 reason:(long long)a2 periodicActivity:(id)a3;
- (id)subContextByAddingOptions:(unsigned long long)a0;
- (id)subContextByRemovingOptions:(unsigned long long)a0;

@end
