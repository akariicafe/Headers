@class NSString;

@interface ADConfiguration : PBCodable <NSCopying> {
    struct { unsigned char expirationDate : 1; unsigned char requestType : 1; unsigned char isTest : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasBundleId;
@property (retain, nonatomic) NSString *bundleId;
@property (nonatomic) BOOL hasRequestType;
@property (nonatomic) int requestType;
@property (nonatomic) BOOL hasIsTest;
@property (nonatomic) BOOL isTest;
@property (readonly, nonatomic) BOOL hasBaseUrl;
@property (retain, nonatomic) NSString *baseUrl;
@property (nonatomic) BOOL hasExpirationDate;
@property (nonatomic) double expirationDate;

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
