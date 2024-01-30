@class NSString, NSMutableArray, NSData;

@interface NSPPrivacyProxyProxyInfo : PBCodable <NSCopying> {
    struct { unsigned char supportsFallback : 1; } _has;
}

@property (nonatomic) int proxyHop;
@property (retain, nonatomic) NSString *proxyURL;
@property (retain, nonatomic) NSMutableArray *proxyKeyInfos;
@property (retain, nonatomic) NSData *tokenKeyInfo;
@property (nonatomic) BOOL hasSupportsFallback;
@property (nonatomic) BOOL supportsFallback;
@property (readonly, nonatomic) BOOL hasVendor;
@property (retain, nonatomic) NSString *vendor;
@property (readonly, nonatomic) BOOL hasTcpProxyFqdn;
@property (retain, nonatomic) NSString *tcpProxyFqdn;

+ (Class)proxyKeyInfoType;

- (id)proxyHopAsString:(int)a0;
- (void)addProxyKeyInfo:(id)a0;
- (id)proxyKeyInfoAtIndex:(unsigned long long)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)proxyKeyInfosCount;
- (id)description;
- (void)clearProxyKeyInfos;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (int)StringAsProxyHop:(id)a0;
- (id)dictionaryRepresentation;

@end
