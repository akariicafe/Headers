@class NSArray, NSString, NSNumber, NSManagedObjectID;

@interface STUIUser : NSObject <NSCopying>

@property (copy, nonatomic) NSManagedObjectID *userObjectID;
@property (copy, nonatomic) NSArray *devices;
@property (nonatomic) unsigned long long source;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSNumber *dsid;
@property (copy, nonatomic) NSString *altDSID;
@property (nonatomic, getter=isScreenTimeEnabled) BOOL screenTimeEnabled;
@property (nonatomic, getter=isManaged) BOOL managed;
@property (nonatomic, getter=isWebUsageEnabled) BOOL webUsageEnabled;
@property (nonatomic, getter=isRemoteUser) BOOL remoteUser;
@property (nonatomic) unsigned long long type;
@property (nonatomic) BOOL hasAllowances;
@property (readonly, nonatomic) BOOL hasPasscode;
@property (copy, nonatomic) NSString *passcode;
@property (copy, nonatomic) NSString *recoveryAltDSID;
@property (readonly, nonatomic) BOOL needsRecoveryAppleID;
@property (readonly, nonatomic) BOOL canRecoveryAuthenticate;
@property (readonly, copy, nonatomic) NSString *givenName;
@property (readonly, nonatomic) BOOL isParent;
@property (readonly, nonatomic) BOOL isChild;
@property BOOL hasDeviceWithoutUsageReported;

+ (unsigned long long)userTypeFromUser:(id)a0;
+ (id)keyPathsForValuesAffectingHasPasscode;
+ (id)keyPathsForValuesAffectingGivenName;

- (id)initWithUser:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
