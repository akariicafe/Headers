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

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (void)_enumerateAsynchronousFields:(id /* block */)a0;

@end
