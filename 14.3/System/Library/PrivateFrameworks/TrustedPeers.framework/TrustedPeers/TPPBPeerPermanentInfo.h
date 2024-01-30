@class NSData, NSString;

@interface TPPBPeerPermanentInfo : PBCodable <NSCopying> {
    struct { unsigned char epoch : 1; } _has;
}

@property (nonatomic) BOOL hasEpoch;
@property (nonatomic) unsigned long long epoch;
@property (readonly, nonatomic) BOOL hasSigningPubKey;
@property (retain, nonatomic) NSData *signingPubKey;
@property (readonly, nonatomic) BOOL hasEncryptionPubKey;
@property (retain, nonatomic) NSData *encryptionPubKey;
@property (readonly, nonatomic) BOOL hasMachineId;
@property (retain, nonatomic) NSString *machineId;
@property (readonly, nonatomic) BOOL hasModelId;
@property (retain, nonatomic) NSString *modelId;

- (void).cxx_destruct;
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
