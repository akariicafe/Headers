@interface STScreenTimeSettings : NSManagedObject

@property (nonatomic) BOOL screenTimeEnabled;
@property (nonatomic) BOOL cloudSyncEnabled;

+ (id)fetchScreenTimeSettingsInContext:(id)a0 error:(id *)a1;

@end
