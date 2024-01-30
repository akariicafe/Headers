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

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
