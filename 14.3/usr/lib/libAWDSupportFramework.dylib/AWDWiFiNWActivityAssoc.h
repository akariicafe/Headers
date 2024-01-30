@interface AWDWiFiNWActivityAssoc : PBCodable <NSCopying> {
    struct { unsigned char assocFailed : 1; unsigned char assocSuccess : 1; unsigned char authFailed : 1; unsigned char authSuccess : 1; unsigned char linkChanged : 1; unsigned char reassocFailed : 1; unsigned char reassocSuccess : 1; unsigned char roamFailed : 1; unsigned char roamSuccess : 1; } _has;
}

@property (nonatomic) BOOL hasAuthSuccess;
@property (nonatomic) unsigned int authSuccess;
@property (nonatomic) BOOL hasAuthFailed;
@property (nonatomic) unsigned int authFailed;
@property (nonatomic) BOOL hasAssocSuccess;
@property (nonatomic) unsigned int assocSuccess;
@property (nonatomic) BOOL hasAssocFailed;
@property (nonatomic) unsigned int assocFailed;
@property (nonatomic) BOOL hasReassocSuccess;
@property (nonatomic) unsigned int reassocSuccess;
@property (nonatomic) BOOL hasReassocFailed;
@property (nonatomic) unsigned int reassocFailed;
@property (nonatomic) BOOL hasLinkChanged;
@property (nonatomic) unsigned int linkChanged;
@property (nonatomic) BOOL hasRoamSuccess;
@property (nonatomic) unsigned int roamSuccess;
@property (nonatomic) BOOL hasRoamFailed;
@property (nonatomic) unsigned int roamFailed;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
