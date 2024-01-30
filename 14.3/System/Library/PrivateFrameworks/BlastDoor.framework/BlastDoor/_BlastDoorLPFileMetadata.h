@class NSString, NSDate, _BlastDoorLPImage;

@interface _BlastDoorLPFileMetadata : _BlastDoorLPSpecializationMetadata

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *type;
@property (nonatomic) unsigned long long size;
@property (retain, nonatomic) _BlastDoorLPImage *thumbnail;
@property (retain, nonatomic) _BlastDoorLPImage *icon;
@property (retain, nonatomic) NSDate *creationDate;

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
