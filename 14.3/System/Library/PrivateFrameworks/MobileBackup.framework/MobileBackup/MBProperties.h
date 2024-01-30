@class NSString, NSDictionary, NSData, NSDate;

@interface MBProperties : NSObject {
    BOOL _protect;
}

@property (nonatomic) double minSupportedVersion;
@property (nonatomic) double maxSupportedVersion;
@property (readonly, nonatomic) id propertyList;
@property (nonatomic, getter=isProtected) BOOL protected;
@property (nonatomic) double systemDomainsVersion;
@property (retain, nonatomic) NSData *keybagData;
@property (retain, nonatomic) NSDate *date;
@property (nonatomic) double version;
@property (nonatomic, getter=wasPasscodeSet) BOOL passcodeSet;
@property (nonatomic) BOOL encrypted;
@property (readonly, nonatomic) NSDictionary *containers;
@property (readonly, nonatomic) NSDictionary *appleIDs;
@property (retain, nonatomic) NSString *activeAppleID;
@property (retain, nonatomic) NSDictionary *lockdownKeys;
@property (readonly, nonatomic) NSString *deviceID;
@property (readonly, nonatomic) NSString *serialNumber;
@property (readonly, nonatomic) NSString *deviceName;
@property (readonly, nonatomic) NSString *productType;
@property (readonly, nonatomic) NSString *buildVersion;
@property (retain, nonatomic) NSData *buddyStashData;
@property (readonly, nonatomic) BOOL hasCorruptSQLiteDBs;
@property (readonly, nonatomic) BOOL hasManifestDB;
@property (readonly, nonatomic) BOOL hasEncryptedManifestDB;
@property (nonatomic) NSData *manifestEncryptionKey;
@property (retain, nonatomic) NSString *requiredProductVersion;

+ (id)properties;
+ (id)propertiesWithFile:(id)a0 error:(id *)a1;

- (id)objectForKey:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)description;
- (id)initWithData:(id)a0 error:(id *)a1;
- (BOOL)_boolForKey:(id)a0;
- (id)_dataForKey:(id)a0;
- (id)_dictionaryForKey:(id)a0;
- (id)containerWithIdentifier:(id)a0;
- (id)initWithFile:(id)a0 error:(id *)a1;
- (id)initWithVersion:(double)a0 minVersion:(double)a1 maxVersion:(double)a2;
- (void)_setData:(id)a0 forKey:(id)a1;
- (void)_setDictionary:(id)a0 forKey:(id)a1;
- (id)_stringForLockdownKey:(id)a0;
- (void)addContainer:(id)a0;
- (void)addAppleIDsFromSet:(id)a0 dataClass:(id)a1;
- (void)addAppleID:(id)a0 DSID:(id)a1 altDSID:(id)a2 dataClass:(id)a3;
- (void)addAssetDescriptionForAppleID:(id)a0 assetDescription:(id)a1;
- (void)addContainersFromArray:(id)a0;
- (void)removeAllContainers;
- (id)dataWithError:(id *)a0;
- (void)_setBool:(BOOL)a0 forKey:(id)a1;
- (BOOL)writeToFile:(id)a0 error:(id *)a1;
- (void)removeObjectForKey:(id)a0;

@end
