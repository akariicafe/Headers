@class NSString;

@interface NSPPrivacyProxyObliviousTargetInfo : PBCodable <NSCopying> {
    unsigned int _proxyIndex;
    NSString *_proxyURLPath;
    NSString *_targetHost;
    struct { unsigned char proxyIndex : 1; } _has;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
