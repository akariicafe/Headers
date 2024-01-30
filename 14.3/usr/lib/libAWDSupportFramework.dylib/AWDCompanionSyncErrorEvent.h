@class NSString;

@interface AWDCompanionSyncErrorEvent : PBCodable <NSCopying> {
    struct { unsigned char sequenceNumber : 1; unsigned char timestamp : 1; unsigned char error : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) BOOL hasService;
@property (retain, nonatomic) NSString *service;
@property (nonatomic) BOOL hasSequenceNumber;
@property (nonatomic) unsigned long long sequenceNumber;
@property (nonatomic) BOOL hasError;
@property (nonatomic) int error;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)errorAsString:(int)a0;
- (int)StringAsError:(id)a0;

@end
