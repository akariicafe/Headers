@class NSString, AWDHomeKitCameraSnapshotIDSTransfer, AWDHomeKitCameraSnapshotMessaging, AWDHomeKitVendorInformation, AWDHomeKitCameraIDSSessionSetup;

@interface AWDHomeKitCameraSnapshot : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char certified : 1; unsigned char errorCode : 1; unsigned char receivedSnapshotFromAccessory : 1; unsigned char sentSnapshotRequestToAccessory : 1; unsigned char underlyingErrorCode : 1; unsigned char forNotification : 1; unsigned char isLocal : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasVendorDetails;
@property (retain, nonatomic) AWDHomeKitVendorInformation *vendorDetails;
@property (nonatomic) BOOL hasCertified;
@property (nonatomic) int certified;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) BOOL hasSessionID;
@property (retain, nonatomic) NSString *sessionID;
@property (nonatomic) BOOL hasErrorCode;
@property (nonatomic) unsigned int errorCode;
@property (nonatomic) BOOL hasIsLocal;
@property (nonatomic) BOOL isLocal;
@property (nonatomic) BOOL hasForNotification;
@property (nonatomic) BOOL forNotification;
@property (readonly, nonatomic) BOOL hasIdsSessionSetup;
@property (retain, nonatomic) AWDHomeKitCameraIDSSessionSetup *idsSessionSetup;
@property (nonatomic) BOOL hasSentSnapshotRequestToAccessory;
@property (nonatomic) unsigned int sentSnapshotRequestToAccessory;
@property (nonatomic) BOOL hasReceivedSnapshotFromAccessory;
@property (nonatomic) unsigned int receivedSnapshotFromAccessory;
@property (readonly, nonatomic) BOOL hasWatchMessaging;
@property (retain, nonatomic) AWDHomeKitCameraSnapshotMessaging *watchMessaging;
@property (readonly, nonatomic) BOOL hasControllerMessaging;
@property (retain, nonatomic) AWDHomeKitCameraSnapshotMessaging *controllerMessaging;
@property (readonly, nonatomic) BOOL hasResidentMessaging;
@property (retain, nonatomic) AWDHomeKitCameraSnapshotMessaging *residentMessaging;
@property (readonly, nonatomic) BOOL hasResidentToPhone;
@property (retain, nonatomic) AWDHomeKitCameraSnapshotIDSTransfer *residentToPhone;
@property (readonly, nonatomic) BOOL hasPhoneToWatch;
@property (retain, nonatomic) AWDHomeKitCameraSnapshotIDSTransfer *phoneToWatch;
@property (readonly, nonatomic) BOOL hasUnderlyingErrorDomain;
@property (retain, nonatomic) NSString *underlyingErrorDomain;
@property (nonatomic) BOOL hasUnderlyingErrorCode;
@property (nonatomic) unsigned int underlyingErrorCode;

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
- (int)StringAsCertified:(id)a0;
- (id)certifiedAsString:(int)a0;

@end
