@class ATPResponse, NSData, ATPRequest, ATPError;

@interface ATPMessage : PBCodable <NSCopying> {
    struct { unsigned char messageID : 1; unsigned char messageType : 1; unsigned char sessionID : 1; unsigned char additionalPayload : 1; } _has;
}

@property (nonatomic) BOOL hasMessageType;
@property (nonatomic) int messageType;
@property (nonatomic) BOOL hasMessageID;
@property (nonatomic) unsigned int messageID;
@property (nonatomic) BOOL hasSessionID;
@property (nonatomic) unsigned int sessionID;
@property (readonly, nonatomic) BOOL hasParameters;
@property (retain, nonatomic) NSData *parameters;
@property (readonly, nonatomic) BOOL hasParamsSignature;
@property (retain, nonatomic) NSData *paramsSignature;
@property (readonly, nonatomic) BOOL hasPayloadSignature;
@property (retain, nonatomic) NSData *payloadSignature;
@property (readonly, nonatomic) BOOL hasRequest;
@property (retain, nonatomic) ATPRequest *request;
@property (readonly, nonatomic) BOOL hasResponse;
@property (retain, nonatomic) ATPResponse *response;
@property (readonly, nonatomic) BOOL hasPayload;
@property (retain, nonatomic) NSData *payload;
@property (nonatomic) BOOL hasAdditionalPayload;
@property (nonatomic) BOOL additionalPayload;
@property (readonly, nonatomic) BOOL hasStreamError;
@property (retain, nonatomic) ATPError *streamError;

- (id)messageTypeAsString:(int)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (int)StringAsMessageType:(id)a0;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)formattedDescription;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
