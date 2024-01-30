@class TVRMSControlInterfaceMessage;

@interface TVRMSConnectToServiceResponseMessage : PBCodable <NSCopying> {
    struct { unsigned char responseCode : 1; unsigned char sessionIdentifier : 1; } _has;
}

@property (nonatomic) BOOL hasResponseCode;
@property (nonatomic) int responseCode;
@property (nonatomic) BOOL hasSessionIdentifier;
@property (nonatomic) int sessionIdentifier;
@property (readonly, nonatomic) BOOL hasControlInterface;
@property (retain, nonatomic) TVRMSControlInterfaceMessage *controlInterface;

- (void).cxx_destruct;
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
