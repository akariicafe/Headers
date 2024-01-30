@class HMDRemoteEventRouterProtoKeepAliveMessage, HMDRemoteEventRouterProtoDisconnectMessage, HMDRemoteEventRouterProtoChangeRegistrationsMessage, NSString, HMDRemoteEventRouterProtoConnectMessage;

@interface HMDRemoteEventRouterProtoMessage : PBCodable <NSCopying> {
    HMDRemoteEventRouterProtoChangeRegistrationsMessage *_changeRegistrations;
    HMDRemoteEventRouterProtoConnectMessage *_connect;
    HMDRemoteEventRouterProtoDisconnectMessage *_disconnect;
    NSString *_identifier;
    HMDRemoteEventRouterProtoKeepAliveMessage *_keepAlive;
    int _request;
    struct { unsigned char request : 1; } _has;
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
