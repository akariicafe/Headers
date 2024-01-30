@class NSString;

@interface ASCodableShareLocations : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasActivityShareURL;
@property (retain, nonatomic) NSString *activityShareURL;
@property (readonly, nonatomic) BOOL hasRelationshipShareURL;
@property (retain, nonatomic) NSString *relationshipShareURL;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
