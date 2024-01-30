@class NSString;

@interface NNMKProtoAccountAuthenticationState : PBCodable <NSCopying> {
    struct { unsigned char standaloneState : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasAccountId;
@property (retain, nonatomic) NSString *accountId;
@property (nonatomic) BOOL hasStandaloneState;
@property (nonatomic) unsigned int standaloneState;
@property (readonly, nonatomic) BOOL hasDisplayName;
@property (retain, nonatomic) NSString *displayName;
@property (readonly, nonatomic) BOOL hasSubsectionId;
@property (retain, nonatomic) NSString *subsectionId;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
