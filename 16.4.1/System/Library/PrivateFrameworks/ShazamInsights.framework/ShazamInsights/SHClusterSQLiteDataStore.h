@class NSString, NSURL, SHClusterStatus;

@interface SHClusterSQLiteDataStore : NSObject

@property (readonly, nonatomic) long long clusterType;
@property (readonly, copy, nonatomic) NSString *requiredStorefront;
@property (readonly, nonatomic) SHClusterStatus *dataStatus;
@property (readonly, nonatomic) double databaseMaxAge;
@property (readonly, nonatomic) NSURL *databaseFilePathURL;

+ (BOOL)sqliteDatabaseExistsAtURL:(id)a0;

- (void).cxx_destruct;
- (BOOL)isDataLoaded;
- (BOOL)isDataValid;
- (BOOL)hasNotPassedExpiryDate:(id)a0 isForCountryCode:(id)a1;
- (id)initWithClusterType:(long long)a0 databaseMaxAge:(double)a1 forStorefront:(id)a2 databaseFilePathURL:(id)a3;

@end
