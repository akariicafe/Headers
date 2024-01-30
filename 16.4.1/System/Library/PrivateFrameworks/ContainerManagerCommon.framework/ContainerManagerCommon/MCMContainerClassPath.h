@class NSString, MCMUserIdentity, MCMPOSIXUser, NSURL;

@interface MCMContainerClassPath : NSObject <MCMContainerPathHasComponents, NSCopying> {
    BOOL _caseSensitive;
    BOOL _caseSensitiveDetermined;
    BOOL _supportsDataProtection;
    BOOL _supportsDataProtectionDetermined;
    BOOL _classURLCreated;
    BOOL _symlinkClassURLCreated;
    NSURL *_homeDirectoryURL;
}

@property (readonly, nonatomic) NSString *categoryComponent;
@property (readonly, nonatomic) NSString *classComponent;
@property (readonly, nonatomic) unsigned long long containerClass;
@property (readonly, nonatomic, getter=isCaseSensitive) BOOL caseSensitive;
@property (readonly, nonatomic) BOOL supportsDataProtection;
@property (nonatomic) BOOL exists;
@property (readonly, nonatomic) MCMPOSIXUser *posixOwner;
@property (readonly, nonatomic) unsigned short posixMode;
@property (readonly, nonatomic) MCMUserIdentity *userIdentity;
@property (readonly, nonatomic) NSURL *baseURL;
@property (readonly, nonatomic) NSURL *categoryURL;
@property (readonly, nonatomic) NSURL *classURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)containerPathForContainerIdentity:(id)a0;
+ (id)_categoryComponentForContainerClass:(unsigned long long)a0;
+ (id)containerPathTypeClasses;
+ (id)containerPathForUserIdentity:(id)a0 containerClass:(unsigned long long)a1;
+ (unsigned short)_modeForContainerClass:(unsigned long long)a0;
+ (id)posixOwnerForContainerClass:(unsigned long long)a0 user:(id)a1;
+ (id)_baseURLForUserIdentity:(id)a0 containerClass:(unsigned long long)a1;
+ (id)_classComponentForContainerClass:(unsigned long long)a0;
+ (id)_baseURLForUserIdentity:(id)a0;
+ (BOOL)_inLibraryRepairBlock_createURLIfNecessary:(id)a0 mode:(unsigned short)a1 owner:(id)a2 dataProtectionClass:(int)a3 exists:(BOOL *)a4 error:(id *)a5;

- (BOOL)_obj1:(id)a0 isEqualToObj2:(id)a1;
- (id)initWithBaseURL:(id)a0 categoryComponent:(id)a1 classComponent:(id)a2 containerClass:(unsigned long long)a3 POSIXOwner:(id)a4 POSIXMode:(unsigned short)a5 userIdentity:(id)a6;
- (BOOL)createIfNecessaryWithError:(id *)a0;
- (BOOL)_createURLIfNecessary:(id)a0 mode:(unsigned short)a1 owner:(id)a2 dataProtectionClass:(int)a3 error:(id *)a4;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToContainerClassPath:(id)a0;
- (void).cxx_destruct;

@end
