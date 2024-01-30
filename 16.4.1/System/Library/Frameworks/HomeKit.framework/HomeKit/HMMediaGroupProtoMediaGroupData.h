@class NSString, NSMutableArray, HMMediaGroupProtoMediaGroupRole;

@interface HMMediaGroupProtoMediaGroupData : PBCodable <NSCopying> {
    struct { unsigned char isDefaultName : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL hasName;
@property (retain, nonatomic) NSString *name;
@property (readonly, nonatomic) BOOL hasParentIdentifier;
@property (retain, nonatomic) NSString *parentIdentifier;
@property (retain, nonatomic) NSMutableArray *destinationIdentifiers;
@property (readonly, nonatomic) BOOL hasAssociatedGroupIdentifier;
@property (retain, nonatomic) NSString *associatedGroupIdentifier;
@property (readonly, nonatomic) BOOL hasGroupRole;
@property (retain, nonatomic) HMMediaGroupProtoMediaGroupRole *groupRole;
@property (nonatomic) BOOL hasIsDefaultName;
@property (nonatomic) BOOL isDefaultName;

+ (Class)destinationIdentifiersType;

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
- (void)addDestinationIdentifiers:(id)a0;
- (void)clearDestinationIdentifiers;
- (id)destinationIdentifiersAtIndex:(unsigned long long)a0;
- (unsigned long long)destinationIdentifiersCount;

@end
