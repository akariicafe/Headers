@class NSString;

@interface BMPBDeviceMetadataEvent : PBCodable <NSCopying> {
    struct { unsigned char platform : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasName;
@property (retain, nonatomic) NSString *name;
@property (readonly, nonatomic) BOOL hasBuild;
@property (retain, nonatomic) NSString *build;
@property (nonatomic) BOOL hasPlatform;
@property (nonatomic) int platform;

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
- (id)platformAsString:(int)a0;
- (int)StringAsPlatform:(id)a0;

@end
