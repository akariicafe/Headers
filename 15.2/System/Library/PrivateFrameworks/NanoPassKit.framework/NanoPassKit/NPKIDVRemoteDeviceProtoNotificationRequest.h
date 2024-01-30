@class NSString;

@interface NPKIDVRemoteDeviceProtoNotificationRequest : PBRequest <NSCopying>

@property (nonatomic) int notificationType;
@property (nonatomic) int documentType;
@property (readonly, nonatomic) BOOL hasIssuerName;
@property (retain, nonatomic) NSString *issuerName;

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
- (id)notificationTypeAsString:(int)a0;
- (int)StringAsNotificationType:(id)a0;
- (id)documentTypeAsString:(int)a0;
- (int)StringAsDocumentType:(id)a0;

@end
