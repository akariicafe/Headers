@class NSString;

@interface AWDIDSRealTimeEncryptionMissingPrekeys : PBCodable <NSCopying> {
    struct { unsigned char activeParticipants : 1; unsigned char missingPrekeys : 1; unsigned char timestamp : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) BOOL hasServiceName;
@property (retain, nonatomic) NSString *serviceName;
@property (nonatomic) BOOL hasActiveParticipants;
@property (nonatomic) unsigned long long activeParticipants;
@property (nonatomic) BOOL hasMissingPrekeys;
@property (nonatomic) unsigned long long missingPrekeys;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (id)dictionaryRepresentation;

@end
