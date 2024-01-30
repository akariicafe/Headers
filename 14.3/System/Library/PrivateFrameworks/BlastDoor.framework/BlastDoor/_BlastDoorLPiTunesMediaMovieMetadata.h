@class NSString, _BlastDoorLPArtworkMetadata, _BlastDoorLPImage;

@interface _BlastDoorLPiTunesMediaMovieMetadata : _BlastDoorLPSpecializationMetadata

@property (copy, nonatomic) NSString *storeFrontIdentifier;
@property (copy, nonatomic) NSString *storeIdentifier;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *genre;
@property (retain, nonatomic) _BlastDoorLPImage *artwork;
@property (copy, nonatomic) _BlastDoorLPArtworkMetadata *artworkMetadata;
@property (retain, nonatomic) _BlastDoorLPImage *branding;
@property (retain, nonatomic) NSString *brandingText;

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
