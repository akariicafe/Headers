@interface AWDManagementFrames : PBCodable <NSCopying> {
    struct { unsigned char aTIM : 1; unsigned char action : 1; unsigned char assocRequest : 1; unsigned char assocResponse : 1; unsigned char auth : 1; unsigned char beacon : 1; unsigned char deauth : 1; unsigned char disassoc : 1; unsigned char probeRequest : 1; unsigned char probeResponse : 1; unsigned char reassocRequest : 1; unsigned char reassocResponse : 1; } _has;
}

@property (nonatomic) BOOL hasAssocRequest;
@property (nonatomic) unsigned long long assocRequest;
@property (nonatomic) BOOL hasAssocResponse;
@property (nonatomic) unsigned long long assocResponse;
@property (nonatomic) BOOL hasReassocRequest;
@property (nonatomic) unsigned long long reassocRequest;
@property (nonatomic) BOOL hasReassocResponse;
@property (nonatomic) unsigned long long reassocResponse;
@property (nonatomic) BOOL hasProbeRequest;
@property (nonatomic) unsigned long long probeRequest;
@property (nonatomic) BOOL hasProbeResponse;
@property (nonatomic) unsigned long long probeResponse;
@property (nonatomic) BOOL hasBeacon;
@property (nonatomic) unsigned long long beacon;
@property (nonatomic) BOOL hasATIM;
@property (nonatomic) unsigned long long aTIM;
@property (nonatomic) BOOL hasDisassoc;
@property (nonatomic) unsigned long long disassoc;
@property (nonatomic) BOOL hasAuth;
@property (nonatomic) unsigned long long auth;
@property (nonatomic) BOOL hasDeauth;
@property (nonatomic) unsigned long long deauth;
@property (nonatomic) BOOL hasAction;
@property (nonatomic) unsigned long long action;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;

@end
