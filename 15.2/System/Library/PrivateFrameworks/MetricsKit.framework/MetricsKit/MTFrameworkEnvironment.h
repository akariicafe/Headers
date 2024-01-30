@class NSString;
@protocol MTIDSecretStore;

@interface MTFrameworkEnvironment : NSObject {
    NSString *_localDataPath;
    id<MTIDSecretStore> _secretStore;
}

@property (class, retain) MTFrameworkEnvironment *sharedEnvironment;

@property (copy, nonatomic) NSString *localDataPath;

+ (void)initialize;
+ (void)withEnvironment:(id)a0 execute:(id /* block */)a1;

- (id)hostProcessBundleIdentifier;
- (id)metricsKitBundleIdentifier;
- (BOOL)useCloudKitSandbox;
- (id)valueForEntitlement:(id)a0;
- (id)date;
- (void).cxx_destruct;
- (BOOL)isInternalBuild;
- (id)secretStore;
- (id)dateOfBirthComponents;

@end
