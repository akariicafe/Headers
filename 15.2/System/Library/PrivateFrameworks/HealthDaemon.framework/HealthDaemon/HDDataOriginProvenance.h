@class NSString, NSNumber, HDContributorReference;

@interface HDDataOriginProvenance : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long syncProvenance;
@property (copy, nonatomic) NSString *productType;
@property (copy, nonatomic) NSString *systemBuild;
@property (nonatomic) struct { long long majorVersion; long long minorVersion; long long patchVersion; } operatingSystemVersion;
@property (copy, nonatomic) NSString *sourceVersion;
@property (copy, nonatomic) NSString *timeZoneName;
@property (retain, nonatomic) NSNumber *sourceID;
@property (retain, nonatomic) NSNumber *deviceID;
@property (retain, nonatomic) HDContributorReference *contributorReference;

+ (id)dataProvenanceWithSyncProvenance:(long long)a0 productType:(id)a1 systemBuild:(id)a2 operatingSystemVersion:(struct { long long x0; long long x1; long long x2; })a3 sourceVersion:(id)a4 timeZoneName:(id)a5 sourceID:(id)a6 deviceID:(id)a7 contributorReference:(id)a8;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isValid;

@end
