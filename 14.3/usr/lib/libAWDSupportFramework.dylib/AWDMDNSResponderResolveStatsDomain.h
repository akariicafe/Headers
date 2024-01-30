@class NSString, NSMutableArray;

@interface AWDMDNSResponderResolveStatsDomain : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasName;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSMutableArray *hostnames;

+ (Class)hostnameType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)addHostname:(id)a0;
- (unsigned long long)hostnamesCount;
- (void)clearHostnames;
- (id)hostnameAtIndex:(unsigned long long)a0;

@end
