@class NSString;

@interface AWDSafariVersioningEvent : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char variant : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) BOOL hasVersion;
@property (retain, nonatomic) NSString *version;
@property (nonatomic) BOOL hasVariant;
@property (nonatomic) int variant;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)variantAsString:(int)a0;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (int)StringAsVariant:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
