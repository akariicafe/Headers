@class NSString;

@interface HDSPSyncedDefaultsInfo : NSObject

@property (readonly, copy, nonatomic) NSString *dataVersionKey;
@property (readonly, nonatomic) unsigned long long currentDataVersion;
@property (readonly, copy, nonatomic) NSString *cloudDataVersionKey;
@property (readonly, nonatomic) unsigned long long currentCloudDataVersion;
@property (readonly, nonatomic) NSString *cloudSyncEnabledKey;
@property (readonly, copy, nonatomic) NSString *localDataVersionKey;
@property (readonly, nonatomic) unsigned long long currentLocalDataVersion;

- (id)initWithDataVersionKey:(id)a0 currentDataVersion:(unsigned long long)a1 cloudDataVersionKey:(id)a2 currentCloudDataVersion:(unsigned long long)a3 cloudSyncEnabledKey:(id)a4 localDataVersionKey:(id)a5 currentLocalDataVersion:(unsigned long long)a6;
- (void).cxx_destruct;

@end
