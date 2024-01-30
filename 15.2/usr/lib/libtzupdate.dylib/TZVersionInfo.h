@class NSString, NSArray, NSDictionary, NSURL, NSNumber;

@interface TZVersionInfo : NSObject

@property (retain) NSString *tzDataVersion;
@property (retain) NSString *bundleVersion;
@property (retain) NSString *icuTZSchemaVersion;
@property (retain) NSArray *changedFiles;
@property (retain) NSDictionary *alertZones;
@property (retain) NSNumber *shouldAlertAll;
@property (readonly) NSString *versionString;
@property (retain) NSURL *diskLocation;

+ (id)versionInfoFromDefaultSystem;
+ (id)versionInfoFromContainerDirectory:(id)a0;
+ (id)versionInfoWithDictionary:(id)a0 isPartial:(BOOL)a1;
+ (BOOL)_verifyVersionInfoDictionary:(id)a0;
+ (id)blankVersionInfo;
+ (id)_tzDataVersionFromZoneinfoDirectory:(id)a0 withError:(id *)a1;

- (long long)compare:(id)a0;
- (BOOL)isBlank;
- (id)description;
- (void).cxx_destruct;
- (id)_initWithVersionInfoDictionary:(id)a0 isPartial:(BOOL)a1;

@end
