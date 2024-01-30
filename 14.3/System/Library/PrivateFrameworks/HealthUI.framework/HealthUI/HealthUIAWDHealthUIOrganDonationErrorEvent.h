@interface HealthUIAWDHealthUIOrganDonationErrorEvent : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char errorType : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasErrorType;
@property (nonatomic) int errorType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)errorTypeAsString:(int)a0;
- (int)StringAsErrorType:(id)a0;

@end
