@class NSArray, NSString, NSData;

@interface NETSchemaNETDebugNetworkConnectionStatePreparationSnapshotCaptured : SISchemaInstrumentationMessage {
    struct { unsigned char isExpensive : 1; unsigned char hasIpv6 : 1; unsigned char hasIpv4 : 1; unsigned char isConstrained : 1; unsigned char status : 1; } _has;
}

@property (nonatomic) BOOL isExpensive;
@property (nonatomic) BOOL hasIsExpensive;
@property (copy, nonatomic) NSArray *pathGateways;
@property (copy, nonatomic) NSString *connectionInfo;
@property (nonatomic) BOOL hasConnectionInfo;
@property (nonatomic) BOOL hasIpv6;
@property (nonatomic) BOOL hasHasIpv6;
@property (nonatomic) BOOL hasIpv4;
@property (nonatomic) BOOL hasHasIpv4;
@property (nonatomic) BOOL isConstrained;
@property (nonatomic) BOOL hasIsConstrained;
@property (copy, nonatomic) NSArray *pathInterfaces;
@property (nonatomic) int status;
@property (nonatomic) BOOL hasStatus;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (void)addPathGateways:(id)a0;
- (void)addPathInterfaces:(id)a0;
- (void)clearPathGateways;
- (void)clearPathInterfaces;
- (void)deleteConnectionInfo;
- (void)deleteHasIpv4;
- (void)deleteHasIpv6;
- (void)deleteIsConstrained;
- (void)deleteIsExpensive;
- (void)deletePathGateways;
- (void)deletePathInterfaces;
- (void)deleteStatus;
- (id)pathGatewaysAtIndex:(unsigned long long)a0;
- (unsigned long long)pathGatewaysCount;
- (id)pathInterfacesAtIndex:(unsigned long long)a0;
- (unsigned long long)pathInterfacesCount;

@end
