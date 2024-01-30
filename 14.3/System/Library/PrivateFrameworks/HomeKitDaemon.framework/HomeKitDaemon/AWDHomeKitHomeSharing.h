@interface AWDHomeKitHomeSharing : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char errorCode : 1; unsigned char responseType : 1; unsigned char stage : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasErrorCode;
@property (nonatomic) int errorCode;
@property (nonatomic) BOOL hasResponseType;
@property (nonatomic) int responseType;
@property (nonatomic) BOOL hasStage;
@property (nonatomic) int stage;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)stageAsString:(int)a0;
- (int)StringAsStage:(id)a0;
- (id)responseTypeAsString:(int)a0;
- (int)StringAsResponseType:(id)a0;

@end
