@class NSString, DRSProtoTaskingDeviceMetadata;

@interface DRSProtoTaskingSystemMessageReceipt : PBCodable <CKCodeOperationMessageMutation, NSCopying> {
    struct { unsigned char receiptDelay : 1; } _has;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL hasTaskingDeviceMetadata;
@property (retain, nonatomic) DRSProtoTaskingDeviceMetadata *taskingDeviceMetadata;
@property (readonly, nonatomic) BOOL hasUuid;
@property (retain, nonatomic) NSString *uuid;
@property (readonly, nonatomic) BOOL hasMessageType;
@property (retain, nonatomic) NSString *messageType;
@property (readonly, nonatomic) BOOL hasChannelType;
@property (retain, nonatomic) NSString *channelType;
@property (readonly, nonatomic) BOOL hasChannelEnvironment;
@property (retain, nonatomic) NSString *channelEnvironment;
@property (nonatomic) BOOL hasReceiptDelay;
@property (nonatomic) float receiptDelay;

- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (id)dictionaryRepresentation;

@end
