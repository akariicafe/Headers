@class NSString, _BlastDoorLPImage;

@interface _BlastDoorLPiCloudSharingMetadata : _BlastDoorLPSpecializationMetadata

@property (copy, nonatomic) NSString *applicationBundleIdenfier;
@property (copy, nonatomic) NSString *application;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) _BlastDoorLPImage *icon;

+ (BOOL)supportsSecureCoding;
+ (id)keyPathsForValuesAffecting_dummyPropertyForObservation;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)_enumerateAsynchronousFields:(id /* block */)a0;
- (void)encodeWithCoder:(id)a0;

@end
