@class NSString, NSArray, _BlastDoorLPImage;

@interface _BlastDoorLPMapCollectionMetadata : _BlastDoorLPSpecializationMetadata

@property (copy, nonatomic) NSString *name;
@property (nonatomic) unsigned int numberOfItems;
@property (retain, nonatomic) _BlastDoorLPImage *icon;
@property (retain, nonatomic) _BlastDoorLPImage *image;
@property (retain, nonatomic) _BlastDoorLPImage *darkImage;
@property (copy, nonatomic) NSArray *addresses;
@property (copy, nonatomic) NSString *publisherName;
@property (retain, nonatomic) _BlastDoorLPImage *publisherIcon;

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
