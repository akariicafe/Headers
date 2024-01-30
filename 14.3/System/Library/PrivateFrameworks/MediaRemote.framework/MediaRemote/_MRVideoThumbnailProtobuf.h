@class NSData;

@interface _MRVideoThumbnailProtobuf : PBCodable <NSCopying> {
    double _time;
    NSData *_imageData;
    struct { unsigned char time : 1; } _has;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
