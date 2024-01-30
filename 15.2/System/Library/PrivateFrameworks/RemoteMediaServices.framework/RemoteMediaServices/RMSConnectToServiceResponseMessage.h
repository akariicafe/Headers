@class RMSControlInterfaceMessage;

@interface RMSConnectToServiceResponseMessage : PBCodable <NSCopying> {
    struct { unsigned char responseCode : 1; unsigned char responseData : 1; unsigned char sessionIdentifier : 1; } _has;
}

@property (nonatomic) BOOL hasResponseCode;
@property (nonatomic) int responseCode;
@property (nonatomic) BOOL hasSessionIdentifier;
@property (nonatomic) int sessionIdentifier;
@property (readonly, nonatomic) BOOL hasControlInterface;
@property (retain, nonatomic) RMSControlInterfaceMessage *controlInterface;
@property (nonatomic) BOOL hasResponseData;
@property (nonatomic) int responseData;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
