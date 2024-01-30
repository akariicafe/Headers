@interface AWDIDSRegistrationControlChosen : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char registrationControlStatus : 1; unsigned char registrationType : 1; unsigned char isInterestingRegion : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasRegistrationType;
@property (nonatomic) int registrationType;
@property (nonatomic) BOOL hasRegistrationControlStatus;
@property (nonatomic) int registrationControlStatus;
@property (nonatomic) BOOL hasIsInterestingRegion;
@property (nonatomic) BOOL isInterestingRegion;

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
