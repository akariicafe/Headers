@class NSMutableArray;

@interface AWDMDNSResponderResolveStats : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (retain, nonatomic) NSMutableArray *servers;
@property (retain, nonatomic) NSMutableArray *domains;

+ (Class)serverType;
+ (Class)domainType;

- (void)addDomain:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (void)addServer:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearDomains;
- (unsigned long long)domainsCount;
- (unsigned long long)serversCount;
- (void)clearServers;
- (id)serverAtIndex:(unsigned long long)a0;
- (id)domainAtIndex:(unsigned long long)a0;

@end
