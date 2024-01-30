@class AWDHomeKitCameraStreamIDSConnSetup, NSString, AWDHomeKitCameraIDSSessionSetup, AWDHomeKitCameraStreamConfigure, AWDHomeKitCameraStreamMessaging, AWDHomeKitVendorInformation, NSMutableArray;

@interface AWDHomeKitCameraStream : PBCodable <NSCopying> {
    struct { unsigned char duration : 1; unsigned char startupDelay : 1; unsigned char timestamp : 1; unsigned char certified : 1; unsigned char errorCode : 1; unsigned char receivedFirstFrame : 1; unsigned char resolutionOnClose : 1; unsigned char underlyingErrorCode : 1; unsigned char isLocal : 1; unsigned char isStreamStarted : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasVendorDetails;
@property (retain, nonatomic) AWDHomeKitVendorInformation *vendorDetails;
@property (nonatomic) BOOL hasCertified;
@property (nonatomic) int certified;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) BOOL hasSessionID;
@property (retain, nonatomic) NSString *sessionID;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) unsigned long long duration;
@property (nonatomic) BOOL hasErrorCode;
@property (nonatomic) unsigned int errorCode;
@property (nonatomic) BOOL hasIsLocal;
@property (nonatomic) BOOL isLocal;
@property (readonly, nonatomic) BOOL hasInitialConfiguration;
@property (retain, nonatomic) AWDHomeKitCameraStreamConfigure *initialConfiguration;
@property (retain, nonatomic) NSMutableArray *reconfigurations;
@property (readonly, nonatomic) BOOL hasWatchIDSConnectionSetup;
@property (retain, nonatomic) AWDHomeKitCameraStreamIDSConnSetup *watchIDSConnectionSetup;
@property (readonly, nonatomic) BOOL hasPhoneIDSConnectionSetup;
@property (retain, nonatomic) AWDHomeKitCameraStreamIDSConnSetup *phoneIDSConnectionSetup;
@property (readonly, nonatomic) BOOL hasIdsSessionSetup;
@property (retain, nonatomic) AWDHomeKitCameraIDSSessionSetup *idsSessionSetup;
@property (readonly, nonatomic) BOOL hasWatchMessaging;
@property (retain, nonatomic) AWDHomeKitCameraStreamMessaging *watchMessaging;
@property (readonly, nonatomic) BOOL hasControllerMessaging;
@property (retain, nonatomic) AWDHomeKitCameraStreamMessaging *controllerMessaging;
@property (readonly, nonatomic) BOOL hasResidentMessaging;
@property (retain, nonatomic) AWDHomeKitCameraStreamMessaging *residentMessaging;
@property (nonatomic) BOOL hasReceivedFirstFrame;
@property (nonatomic) unsigned int receivedFirstFrame;
@property (readonly, nonatomic) BOOL hasUnderlyingErrorDomain;
@property (retain, nonatomic) NSString *underlyingErrorDomain;
@property (nonatomic) BOOL hasUnderlyingErrorCode;
@property (nonatomic) unsigned int underlyingErrorCode;
@property (nonatomic) BOOL hasStartupDelay;
@property (nonatomic) unsigned long long startupDelay;
@property (nonatomic) BOOL hasIsStreamStarted;
@property (nonatomic) BOOL isStreamStarted;
@property (nonatomic) BOOL hasResolutionOnClose;
@property (nonatomic) int resolutionOnClose;
@property (retain, nonatomic) NSMutableArray *resolutionCounts;

+ (Class)reconfigurationsType;
+ (Class)resolutionCountType;

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
- (int)StringAsResolutionOnClose:(id)a0;
- (int)StringAsCertified:(id)a0;
- (void)addReconfigurations:(id)a0;
- (void)addResolutionCount:(id)a0;
- (id)certifiedAsString:(int)a0;
- (void)clearReconfigurations;
- (void)clearResolutionCounts;
- (id)reconfigurationsAtIndex:(unsigned long long)a0;
- (unsigned long long)reconfigurationsCount;
- (id)resolutionCountAtIndex:(unsigned long long)a0;
- (unsigned long long)resolutionCountsCount;
- (id)resolutionOnCloseAsString:(int)a0;

@end
