@class NSData;

@interface PKProtobufPaymentContentItem : PBCodable <NSCopying> {
    struct { unsigned char centered : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasImageRequest;
@property (retain, nonatomic) NSData *imageRequest;
@property (readonly, nonatomic) BOOL hasImage;
@property (retain, nonatomic) NSData *image;
@property (readonly, nonatomic) BOOL hasTitle;
@property (retain, nonatomic) NSData *title;
@property (readonly, nonatomic) BOOL hasLabel;
@property (retain, nonatomic) NSData *label;
@property (nonatomic) BOOL hasCentered;
@property (nonatomic) BOOL centered;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
