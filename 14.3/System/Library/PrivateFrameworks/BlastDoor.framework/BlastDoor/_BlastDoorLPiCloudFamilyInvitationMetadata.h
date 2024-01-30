@class NSString, _BlastDoorLPImage;

@interface _BlastDoorLPiCloudFamilyInvitationMetadata : _BlastDoorLPSpecializationMetadata

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *action;
@property (copy, nonatomic) NSString *kind;
@property (retain, nonatomic) _BlastDoorLPImage *image;
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
