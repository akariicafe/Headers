@class NSData, NSMutableArray, NSPPrivacyProxyConfiguration;

@interface NSPPrivacyProxySignedConfiguration : PBCodable <NSCopying> {
    struct { unsigned char algorithm : 1; } _has;
}

@property (retain, nonatomic) NSPPrivacyProxyConfiguration *configuration;
@property (retain, nonatomic) NSData *signature;
@property (retain, nonatomic) NSMutableArray *certificates;
@property (nonatomic) BOOL hasAlgorithm;
@property (nonatomic) int algorithm;

+ (Class)certificatesType;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)algorithmAsString:(int)a0;
- (void)copyTo:(id)a0;
- (void)addCertificates:(id)a0;
- (unsigned long long)certificatesCount;
- (void)clearCertificates;
- (id)certificatesAtIndex:(unsigned long long)a0;
- (unsigned long long)hash;
- (int)StringAsAlgorithm:(id)a0;
- (id)dictionaryRepresentation;

@end
