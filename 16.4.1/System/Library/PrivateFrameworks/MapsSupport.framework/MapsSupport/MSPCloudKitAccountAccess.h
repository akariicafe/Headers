@class NSString, CKContainer;

@interface MSPCloudKitAccountAccess : NSObject {
    CKContainer *_container;
    CKContainer *_containerWithZoneWidePCS;
    CKContainer *_secureContainer;
    CKContainer *_secureContainerWithZoneWidePCS;
}

@property (nonatomic) BOOL useSecureContainer;
@property (retain, nonatomic) NSString *accountIdentifier;
@property (nonatomic) BOOL disableDeviceToDeviceEncryption;

+ (BOOL)useLongLivedOperations;
+ (long long)containerEnvironmentForAccessEnvironment:(long long)a0;
+ (BOOL)hasCloudKitEntitlement;
+ (id)sharedAccess;
+ (long long)defaultEnvironment;
+ (void)fetchDeviceToDeviceEncryptionStatus:(id /* block */)a0;

- (id)containerForAccount;
- (id)initWithEnvironment:(long long)a0;
- (id)containerWithZoneWidePCS:(BOOL)a0;
- (void)fetchAccountStatus:(id /* block */)a0;
- (void)fetchDeviceToDeviceEncryptionStatus:(id /* block */)a0;
- (id)initWithEnvironment:(long long)a0 createContainers:(BOOL)a1;
- (id)description;
- (void)fetchAccountIdentifierWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;

@end
