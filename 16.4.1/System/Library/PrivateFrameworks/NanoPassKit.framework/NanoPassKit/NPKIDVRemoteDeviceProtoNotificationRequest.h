@class NSString;

@interface NPKIDVRemoteDeviceProtoNotificationRequest : PBRequest <NSCopying>

@property (nonatomic) int notificationType;
@property (nonatomic) int documentType;
@property (readonly, nonatomic) BOOL hasIssuerName;
@property (retain, nonatomic) NSString *issuerName;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (int)StringAsNotificationType:(id)a0;
- (id)notificationTypeAsString:(int)a0;
- (int)StringAsDocumentType:(id)a0;
- (id)documentTypeAsString:(int)a0;

@end
