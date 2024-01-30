@class NSString;

@interface NWAWDMPTCPConnectionInterfaceReport : PBCodable <NSCopying> {
    struct { int *list; unsigned long long count; unsigned long long size; } _postConnectSubflowFailureErrors;
    struct { unsigned char dataInKB : 1; unsigned char dataOutKB : 1; unsigned char timestamp : 1; unsigned char secondaryFlowFailureCount : 1; unsigned char secondaryFlowSuccessCount : 1; unsigned char postConnectTcpFallbackCount : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) BOOL hasInterfaceName;
@property (retain, nonatomic) NSString *interfaceName;
@property (readonly, nonatomic) unsigned long long postConnectSubflowFailureErrorsCount;
@property (readonly, nonatomic) int *postConnectSubflowFailureErrors;
@property (nonatomic) BOOL hasDataInKB;
@property (nonatomic) long long dataInKB;
@property (nonatomic) BOOL hasDataOutKB;
@property (nonatomic) long long dataOutKB;
@property (nonatomic) BOOL hasSecondaryFlowSuccessCount;
@property (nonatomic) int secondaryFlowSuccessCount;
@property (nonatomic) BOOL hasSecondaryFlowFailureCount;
@property (nonatomic) int secondaryFlowFailureCount;
@property (nonatomic) BOOL hasPostConnectTcpFallbackCount;
@property (nonatomic) BOOL postConnectTcpFallbackCount;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)dealloc;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)addPostConnectSubflowFailureErrors:(int)a0;
- (void)clearPostConnectSubflowFailureErrors;
- (int)postConnectSubflowFailureErrorsAtIndex:(unsigned long long)a0;
- (void)setPostConnectSubflowFailureErrors:(int *)a0 count:(unsigned long long)a1;

@end
