@interface AWDHomeKitCameraStreamMessaging : PBCodable <NSCopying> {
    struct { unsigned char receivedConnSetup : 1; unsigned char receivedNegotiationRequest : 1; unsigned char receivedStartRequest : 1; unsigned char sentConnSetup : 1; unsigned char sentNegotiationRequest : 1; unsigned char sentNegotiationResponse : 1; unsigned char sentStartRequest : 1; unsigned char sentStartResponse : 1; } _has;
}

@property (nonatomic) BOOL hasReceivedNegotiationRequest;
@property (nonatomic) unsigned int receivedNegotiationRequest;
@property (nonatomic) BOOL hasSentNegotiationRequest;
@property (nonatomic) unsigned int sentNegotiationRequest;
@property (nonatomic) BOOL hasSentNegotiationResponse;
@property (nonatomic) unsigned int sentNegotiationResponse;
@property (nonatomic) BOOL hasReceivedStartRequest;
@property (nonatomic) unsigned int receivedStartRequest;
@property (nonatomic) BOOL hasSentStartRequest;
@property (nonatomic) unsigned int sentStartRequest;
@property (nonatomic) BOOL hasSentStartResponse;
@property (nonatomic) unsigned int sentStartResponse;
@property (nonatomic) BOOL hasSentConnSetup;
@property (nonatomic) unsigned int sentConnSetup;
@property (nonatomic) BOOL hasReceivedConnSetup;
@property (nonatomic) unsigned int receivedConnSetup;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
