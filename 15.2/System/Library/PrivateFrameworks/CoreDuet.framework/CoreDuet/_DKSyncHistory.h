@class NSDate;

@interface _DKSyncHistory : NSObject

@property (readonly, nonatomic) NSDate *lastSyncDate;
@property (readonly, nonatomic) unsigned long long lastDaySyncCount;

- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)initWithLastSyncDate:(id)a0 lastDaySyncCount:(unsigned long long)a1;

@end
