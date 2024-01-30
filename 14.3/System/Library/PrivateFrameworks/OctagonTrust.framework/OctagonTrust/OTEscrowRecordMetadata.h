@class NSData, OTEscrowRecordMetadataClientMetadata, NSString;

@interface OTEscrowRecordMetadata : PBCodable <NSCopying> {
    struct { unsigned char secureBackupTimestamp : 1; unsigned char secureBackupUsesMultipleIcscs : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasBackupKeybagDigest;
@property (retain, nonatomic) NSData *backupKeybagDigest;
@property (readonly, nonatomic) BOOL hasClientMetadata;
@property (retain, nonatomic) OTEscrowRecordMetadataClientMetadata *clientMetadata;
@property (nonatomic) BOOL hasSecureBackupUsesMultipleIcscs;
@property (nonatomic) unsigned long long secureBackupUsesMultipleIcscs;
@property (readonly, nonatomic) BOOL hasBottleId;
@property (retain, nonatomic) NSString *bottleId;
@property (nonatomic) BOOL hasSecureBackupTimestamp;
@property (nonatomic) unsigned long long secureBackupTimestamp;
@property (readonly, nonatomic) BOOL hasEscrowedSpki;
@property (retain, nonatomic) NSData *escrowedSpki;
@property (readonly, nonatomic) BOOL hasPeerInfo;
@property (retain, nonatomic) NSData *peerInfo;
@property (readonly, nonatomic) BOOL hasBottleValidity;
@property (retain, nonatomic) NSString *bottleValidity;
@property (readonly, nonatomic) BOOL hasSerial;
@property (retain, nonatomic) NSString *serial;

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
