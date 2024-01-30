@class NSArray, NSDictionary, NSString, NSDate, NSNumber;

@interface ASDSoftwareUpdate : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long deviceFamilies;
@property (nonatomic, getter=isIOSBinaryMacOSCompatible) BOOL iOSBinaryMacOSCompatible;
@property (copy, nonatomic) NSArray *blockedBy;
@property (copy, nonatomic) NSDate *installDate;
@property (copy, nonatomic) NSDictionary *metrics;
@property (nonatomic, getter=isDownloaded) BOOL downloaded;
@property (nonatomic, getter=isPerDevice) BOOL perDevice;
@property (nonatomic, getter=isProfileValidated) BOOL profileValidated;
@property (nonatomic) long long rawUpdateState;
@property (copy, nonatomic) NSDate *timestamp;
@property (nonatomic) long long updateState;
@property (nonatomic) BOOL autoUpdateEnabled;
@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) NSString *buyParams;
@property (readonly, nonatomic) NSNumber *externalVersionIdentifier;
@property (readonly, nonatomic) long long parentalControlsRank;
@property (readonly, nonatomic) NSDictionary *rawUpdateDictionary;
@property (readonly, nonatomic) BOOL requiresRosetta;
@property (readonly, nonatomic) BOOL runsOnIntel;
@property (readonly, nonatomic) BOOL runsOnAppleSilicon;
@property (readonly, nonatomic) long long storeItemIdentifier;
@property (readonly, nonatomic) NSDictionary *updateDictionary;

- (id)releaseDate;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithUpdateDictionary:(id)a0;

@end
