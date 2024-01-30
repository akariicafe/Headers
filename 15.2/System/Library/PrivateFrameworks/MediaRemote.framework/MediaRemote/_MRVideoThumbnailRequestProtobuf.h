@interface _MRVideoThumbnailRequestProtobuf : PBCodable <NSCopying> {
    struct { double *list; unsigned long long count; unsigned long long size; } _timeIntervals;
    float _thumbnailsHeight;
    float _thumbnailsWidth;
    struct { unsigned char thumbnailsHeight : 1; unsigned char thumbnailsWidth : 1; } _has;
}

- (BOOL)readFrom:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (id)dictionaryRepresentation;

@end
