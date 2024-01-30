@class NSString, NSDate, _BlastDoorLPImage;

@interface _BlastDoorLPApplePhotosMomentMetadata : _BlastDoorLPSpecializationMetadata

@property (copy, nonatomic) NSString *title;
@property (nonatomic) unsigned long long photoCount;
@property (nonatomic) unsigned long long videoCount;
@property (nonatomic) unsigned long long otherItemCount;
@property (retain, nonatomic) _BlastDoorLPImage *keyPhoto;
@property (copy, nonatomic) NSDate *expirationDate;
@property (copy, nonatomic) NSDate *earliestAssetDate;
@property (copy, nonatomic) NSDate *latestAssetDate;

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
