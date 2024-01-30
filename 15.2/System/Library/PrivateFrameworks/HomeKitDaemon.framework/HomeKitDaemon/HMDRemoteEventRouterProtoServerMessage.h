@class HMDRemoteEventRouterProtoConnectResponse, NSString, HMDRemoteEventRouterProtoEventsMessage, HMDRemoteEventRouterProtoChangeRegistrationsResponse;

@interface HMDRemoteEventRouterProtoServerMessage : PBCodable <NSCopying> {
    HMDRemoteEventRouterProtoChangeRegistrationsResponse *_changeRegistrationsResponse;
    HMDRemoteEventRouterProtoConnectResponse *_connectResponse;
    NSString *_identifier;
    int _message;
    HMDRemoteEventRouterProtoEventsMessage *_updatedEvents;
    struct { unsigned char message : 1; } _has;
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
