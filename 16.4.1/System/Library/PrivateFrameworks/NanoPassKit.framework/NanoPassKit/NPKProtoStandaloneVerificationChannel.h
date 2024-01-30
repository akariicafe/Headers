@class NSString;

@interface NPKProtoStandaloneVerificationChannel : PBCodable <NSCopying> {
    struct { unsigned char type : 1; unsigned char requiresUserInteraction : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;
@property (readonly, nonatomic) BOOL hasTypeDescriptionUnlocalized;
@property (retain, nonatomic) NSString *typeDescriptionUnlocalized;
@property (readonly, nonatomic) BOOL hasTypeDescription;
@property (retain, nonatomic) NSString *typeDescription;
@property (readonly, nonatomic) BOOL hasOrganizationName;
@property (retain, nonatomic) NSString *organizationName;
@property (nonatomic) BOOL hasRequiresUserInteraction;
@property (nonatomic) BOOL requiresUserInteraction;
@property (readonly, nonatomic) BOOL hasContactPoint;
@property (retain, nonatomic) NSString *contactPoint;
@property (readonly, nonatomic) BOOL hasSourceAddress;
@property (retain, nonatomic) NSString *sourceAddress;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (int)StringAsType:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)typeAsString:(int)a0;

@end
