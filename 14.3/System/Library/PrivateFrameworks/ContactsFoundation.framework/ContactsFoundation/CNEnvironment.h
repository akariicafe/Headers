@class NSString, NSFileManager, CNUserDefaults, NSNumber;

@interface CNEnvironment : NSObject

@property (readonly, nonatomic) NSFileManager *fileManager;
@property (readonly, nonatomic) CNUserDefaults *userDefaults;
@property (readonly, nonatomic) NSString *mainBundleIdentifier;
@property (readonly, nonatomic) NSNumber *isInternalBuildStorage;
@property (readonly, nonatomic) NSNumber *isCommLimitsEnabledStorage;
@property (readonly, nonatomic) NSNumber *isCommLimitsPersistenceAccessibleStorage;

+ (id)currentEnvironment;

- (BOOL)isInternalBuild;
- (BOOL)isInternalBuildImpl;
- (id)init;
- (BOOL)isCommLimitsEnabled;
- (void).cxx_destruct;
- (id)initWithFileManager:(id)a0 userDefaults:(id)a1 mainBundleIdentifier:(id)a2;
- (BOOL)isCommLimitsEnabledImpl;

@end
