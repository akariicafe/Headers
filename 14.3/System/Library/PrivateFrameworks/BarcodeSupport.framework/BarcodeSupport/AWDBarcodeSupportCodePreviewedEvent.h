@interface AWDBarcodeSupportCodePreviewedEvent : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char previewContentType : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasPreviewContentType;
@property (nonatomic) int previewContentType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)previewContentTypeAsString:(int)a0;
- (int)StringAsPreviewContentType:(id)a0;

@end
