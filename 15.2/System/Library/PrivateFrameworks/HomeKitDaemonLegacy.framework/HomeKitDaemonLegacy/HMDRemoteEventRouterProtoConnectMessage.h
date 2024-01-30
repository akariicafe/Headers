@class NSMutableArray, HMEProtoEventInfo;

@interface HMDRemoteEventRouterProtoConnectMessage : PBCodable <NSCopying> {
    HMEProtoEventInfo *_connectEvent;
    unsigned int _routerVersion;
    NSMutableArray *_topicFilterAdditions;
    HMEProtoEventInfo *_unregisterEvent;
    struct { unsigned char routerVersion : 1; } _has;
}

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
