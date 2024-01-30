@class NSString;

@interface BMPBTombstoneEvent : PBCodable <NSCopying> {
    struct { unsigned char length : 1; unsigned char offset : 1; unsigned char reason : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasSegmentName;
@property (retain, nonatomic) NSString *segmentName;
@property (nonatomic) BOOL hasOffset;
@property (nonatomic) unsigned int offset;
@property (nonatomic) BOOL hasLength;
@property (nonatomic) unsigned int length;
@property (nonatomic) BOOL hasReason;
@property (nonatomic) int reason;

- (id)reasonAsString:(int)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (int)StringAsReason:(id)a0;
- (id)dictionaryRepresentation;

@end
