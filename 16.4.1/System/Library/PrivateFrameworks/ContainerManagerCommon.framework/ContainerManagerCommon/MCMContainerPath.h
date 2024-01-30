@class NSString, MCMUserIdentity, NSURL, MCMContainerClassPath, MCMPOSIXUser;

@interface MCMContainerPath : NSObject <MCMContainerPathHasComponents>

@property (readonly, nonatomic) NSString *containerRootComponent;
@property (readonly, nonatomic) NSString *containerDataComponent;
@property (readonly, nonatomic) NSURL *containerRootURL;
@property (readonly, nonatomic) NSURL *containerDataURL;
@property (readonly, nonatomic) NSURL *metadataURL;
@property (readonly, nonatomic) NSString *containerPathIdentifier;
@property (readonly, nonatomic) MCMContainerClassPath *containerClassPath;
@property (readonly, nonatomic) MCMPOSIXUser *rootPOSIXOwner;
@property (readonly, nonatomic) unsigned short rootPOSIXMode;
@property (readonly, nonatomic) MCMPOSIXUser *dataPOSIXOwner;
@property (readonly, nonatomic) unsigned short dataPOSIXMode;
@property (readonly, nonatomic) MCMPOSIXUser *schemaPOSIXOwner;
@property (readonly, nonatomic) unsigned short schemaPOSIXMode;
@property (nonatomic) BOOL exists;
@property (readonly, nonatomic) BOOL transient;
@property (readonly, nonatomic) MCMUserIdentity *userIdentity;
@property (readonly, nonatomic) unsigned long long containerClass;
@property (readonly, nonatomic, getter=isRandomized) BOOL randomized;
@property (readonly, nonatomic) NSURL *baseURL;
@property (readonly, nonatomic) NSURL *categoryURL;
@property (readonly, nonatomic) NSURL *classURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)containerPathIdentifierForCodeSignIdentifier:(id)a0 containerClass:(unsigned long long)a1;
+ (id)containerPathForUserIdentity:(id)a0 containerClass:(unsigned long long)a1 containerPathIdentifier:(id)a2;
+ (id)containerPathForContainerIdentity:(id)a0 containerPathIdentifier:(id)a1;
+ (id)containerPathForContainerClassPath:(id)a0 containerPathIdentifier:(id)a1;
+ (id)_posixOwnerForContainerSubdirectories:(unsigned long long)a0 user:(id)a1;
+ (id)containerPathFromURL:(id)a0 containerClassPath:(id)a1 relativePath:(id *)a2;
+ (Class)_containerClassPathClass;

- (id)initWithContainerClassPath:(id)a0 containerPathIdentifier:(id)a1 containerRootComponent:(id)a2 containerDataComponent:(id)a3;
- (id)containerPathForRealPath;
- (BOOL)_obj1:(id)a0 isEqualToObj2:(id)a1;
- (BOOL)_createURLIfNecessary:(id)a0 mode:(unsigned short)a1 owner:(id)a2 dataProtectionClass:(int)a3 exists:(BOOL *)a4 error:(id *)a5;
- (BOOL)createDataURLIfNecessaryWithDataProtectionClass:(int)a0 error:(id *)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToContainerPath:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)createIfNecessaryWithDataProtectionClass:(int)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
