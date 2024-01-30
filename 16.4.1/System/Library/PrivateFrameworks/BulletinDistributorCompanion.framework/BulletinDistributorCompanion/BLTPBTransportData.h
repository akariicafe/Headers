@class NSData;

@interface BLTPBTransportData : PBCodable <NSCopying> {
    struct { unsigned char sequenceNumber : 1; unsigned char sessionState : 1; unsigned char isInitialSequenceNumber : 1; } _has;
}

@property (nonatomic) BOOL hasSequenceNumber;
@property (nonatomic) unsigned long long sequenceNumber;
@property (nonatomic) BOOL hasIsInitialSequenceNumber;
@property (nonatomic) BOOL isInitialSequenceNumber;
@property (readonly, nonatomic) BOOL hasSessionIdentifier;
@property (retain, nonatomic) NSData *sessionIdentifier;
@property (nonatomic) BOOL hasSessionState;
@property (nonatomic) unsigned int sessionState;
@property (readonly, nonatomic) BOOL hasMd5;
@property (retain, nonatomic) NSData *md5;

+ (id)transportDataWithSequenceNumberManager:(id)a0;

- (id)sessionUUID;
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
- (unsigned long long)backwardsCompatibleSessionState;
- (long long)setSequenceNumberOnManager:(id)a0;

@end
