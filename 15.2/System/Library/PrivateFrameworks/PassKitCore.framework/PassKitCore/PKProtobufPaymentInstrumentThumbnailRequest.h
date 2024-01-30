@class NSString;

@interface PKProtobufPaymentInstrumentThumbnailRequest : PBRequest <NSCopying> {
    struct { unsigned char height : 1; unsigned char width : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasPassIdentifier;
@property (retain, nonatomic) NSString *passIdentifier;
@property (readonly, nonatomic) BOOL hasManifestHash;
@property (retain, nonatomic) NSString *manifestHash;
@property (nonatomic) BOOL hasWidth;
@property (nonatomic) double width;
@property (nonatomic) BOOL hasHeight;
@property (nonatomic) double height;

- (unsigned int)requestTypeCode;
- (Class)responseClass;
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
