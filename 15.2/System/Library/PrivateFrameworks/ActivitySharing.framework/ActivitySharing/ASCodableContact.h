@class NSString, NSMutableArray, ASCodableRelationshipContainer;

@interface ASCodableContact : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasLinkedContactStoreIdentifier;
@property (retain, nonatomic) NSString *linkedContactStoreIdentifier;
@property (readonly, nonatomic) BOOL hasFullName;
@property (retain, nonatomic) NSString *fullName;
@property (readonly, nonatomic) BOOL hasShortName;
@property (retain, nonatomic) NSString *shortName;
@property (retain, nonatomic) NSMutableArray *destinations;
@property (readonly, nonatomic) BOOL hasRelationshipContainer;
@property (retain, nonatomic) ASCodableRelationshipContainer *relationshipContainer;
@property (readonly, nonatomic) BOOL hasRemoteRelationshipContainer;
@property (retain, nonatomic) ASCodableRelationshipContainer *remoteRelationshipContainer;

+ (Class)destinationsType;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)destinationsCount;
- (void)clearDestinations;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (void)addDestinations:(id)a0;
- (id)destinationsAtIndex:(unsigned long long)a0;

@end
