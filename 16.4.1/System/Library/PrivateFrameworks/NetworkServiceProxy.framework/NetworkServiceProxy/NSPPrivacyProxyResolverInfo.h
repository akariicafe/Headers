@class NSString, NSData;

@interface NSPPrivacyProxyResolverInfo : PBCodable <NSCopying> {
    struct { unsigned char weight : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasDohURL;
@property (retain, nonatomic) NSString *dohURL;
@property (readonly, nonatomic) BOOL hasObliviousDoHConfig;
@property (retain, nonatomic) NSData *obliviousDoHConfig;
@property (nonatomic) BOOL hasWeight;
@property (nonatomic) unsigned int weight;

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
