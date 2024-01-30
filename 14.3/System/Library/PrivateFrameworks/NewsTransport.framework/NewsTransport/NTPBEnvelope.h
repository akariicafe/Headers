@class NSData;

@interface NTPBEnvelope : PBCodable <NSCopying> {
    struct { unsigned char contentTypeMinorVersion : 1; unsigned char contentTypePatchVersion : 1; } _has;
}

@property (nonatomic) int contentTypeVersion;
@property (nonatomic) int contentType;
@property (retain, nonatomic) NSData *content;
@property (nonatomic) BOOL hasContentTypeMinorVersion;
@property (nonatomic) int contentTypeMinorVersion;
@property (nonatomic) BOOL hasContentTypePatchVersion;
@property (nonatomic) int contentTypePatchVersion;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) NSData *identifier;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
