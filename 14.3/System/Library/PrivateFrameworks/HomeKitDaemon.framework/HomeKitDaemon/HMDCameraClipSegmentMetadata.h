@interface HMDCameraClipSegmentMetadata : PBCodable <NSCopying> {
    struct { unsigned char byteLength : 1; unsigned char byteOffset : 1; unsigned char duration : 1; unsigned char timeOffset : 1; unsigned char height : 1; unsigned char type : 1; unsigned char width : 1; } _has;
}

@property (nonatomic) BOOL hasByteOffset;
@property (nonatomic) unsigned long long byteOffset;
@property (nonatomic) BOOL hasByteLength;
@property (nonatomic) unsigned long long byteLength;
@property (nonatomic) BOOL hasTimeOffset;
@property (nonatomic) double timeOffset;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) double duration;
@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;
@property (nonatomic) BOOL hasWidth;
@property (nonatomic) unsigned int width;
@property (nonatomic) BOOL hasHeight;
@property (nonatomic) unsigned int height;

- (int)StringAsType:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)typeAsString:(int)a0;

@end
