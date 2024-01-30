@interface AWDTinCanInCallEvent : PBCodable <NSCopying> {
    struct { unsigned char offsetTimeMs : 1; unsigned char eventType : 1; } _has;
}

@property (nonatomic) BOOL hasOffsetTimeMs;
@property (nonatomic) long long offsetTimeMs;
@property (nonatomic) BOOL hasEventType;
@property (nonatomic) unsigned int eventType;

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
