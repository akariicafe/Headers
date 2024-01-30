@class NSString, _BlastDoorLPImage;

@interface _BlastDoorLPMapCollectionPublisherMetadata : _BlastDoorLPSpecializationMetadata

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) _BlastDoorLPImage *icon;
@property (nonatomic) unsigned int numberOfPublishedCollections;

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
