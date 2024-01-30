@class NSString, _BlastDoorLPImage;

@interface _BlastDoorLPiCloudSharingMetadata : _BlastDoorLPSpecializationMetadata

@property (copy, nonatomic) NSString *applicationBundleIdenfier;
@property (copy, nonatomic) NSString *application;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) _BlastDoorLPImage *icon;

+ (BOOL)supportsSecureCoding;
+ (id)keyPathsForValuesAffecting_dummyPropertyForObservation;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)_enumerateAsynchronousFields:(id /* block */)a0;

@end
