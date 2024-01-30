@class NSMutableArray, NSString, NWPBInterface, NWPBEndpoint, NWPBParameters;

@interface NWPBPath : PBCodable <NSCopying> {
    struct { unsigned char status : 1; unsigned char direct : 1; unsigned char ipv4 : 1; unsigned char ipv6 : 1; unsigned char local : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasEndpoint;
@property (retain, nonatomic) NWPBEndpoint *endpoint;
@property (readonly, nonatomic) BOOL hasParameters;
@property (retain, nonatomic) NWPBParameters *parameters;
@property (readonly, nonatomic) BOOL hasClientUUID;
@property (retain, nonatomic) NSString *clientUUID;
@property (nonatomic) BOOL hasStatus;
@property (nonatomic) int status;
@property (readonly, nonatomic) BOOL hasDirectInterface;
@property (retain, nonatomic) NWPBInterface *directInterface;
@property (readonly, nonatomic) BOOL hasDelegateInterface;
@property (retain, nonatomic) NWPBInterface *delegateInterface;
@property (retain, nonatomic) NSMutableArray *agents;
@property (nonatomic) BOOL hasIpv4;
@property (nonatomic) BOOL ipv4;
@property (nonatomic) BOOL hasIpv6;
@property (nonatomic) BOOL ipv6;
@property (nonatomic) BOOL hasLocal;
@property (nonatomic) BOOL local;
@property (nonatomic) BOOL hasDirect;
@property (nonatomic) BOOL direct;

+ (Class)agentsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)StringAsStatus:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)statusAsString:(int)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)addAgents:(id)a0;
- (id)agentsAtIndex:(unsigned long long)a0;
- (unsigned long long)agentsCount;
- (void)clearAgents;

@end
