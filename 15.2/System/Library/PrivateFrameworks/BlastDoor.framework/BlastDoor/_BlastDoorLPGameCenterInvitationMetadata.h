@class NSString, _BlastDoorLPImage;

@interface _BlastDoorLPGameCenterInvitationMetadata : _BlastDoorLPSpecializationMetadata

@property (copy, nonatomic) NSString *game;
@property (retain, nonatomic) _BlastDoorLPImage *image;
@property (retain, nonatomic) _BlastDoorLPImage *icon;
@property (nonatomic) unsigned int numberOfPlayers;
@property (nonatomic) unsigned int minimumNumberOfPlayers;
@property (nonatomic) unsigned int maximumNumberOfPlayers;

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
