@class NSData;

@interface _MRVideoThumbnailProtobuf : PBCodable <NSCopying> {
    double _time;
    NSData *_imageData;
    struct { unsigned char time : 1; } _has;
}

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
