@class NSString;

@interface BMPBScreenTimeRequestEvent : PBCodable <NSCopying> {
    struct { unsigned char eventTime : 1; unsigned char approvalTime : 1; unsigned char kind : 1; unsigned char status : 1; unsigned char isActionUserDevice : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasRequestID;
@property (retain, nonatomic) NSString *requestID;
@property (nonatomic) BOOL hasEventTime;
@property (nonatomic) double eventTime;
@property (readonly, nonatomic) BOOL hasRequesterDSID;
@property (retain, nonatomic) NSString *requesterDSID;
@property (readonly, nonatomic) BOOL hasResponderDSID;
@property (retain, nonatomic) NSString *responderDSID;
@property (nonatomic) BOOL hasKind;
@property (nonatomic) int kind;
@property (nonatomic) BOOL hasStatus;
@property (nonatomic) int status;
@property (nonatomic) BOOL hasApprovalTime;
@property (nonatomic) int approvalTime;
@property (readonly, nonatomic) BOOL hasWebsitePath;
@property (retain, nonatomic) NSString *websitePath;
@property (readonly, nonatomic) BOOL hasBundleID;
@property (retain, nonatomic) NSString *bundleID;
@property (nonatomic) BOOL hasIsActionUserDevice;
@property (nonatomic) BOOL isActionUserDevice;

- (int)StringAsKind:(id)a0;
- (id)kindAsString:(int)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)StringAsStatus:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)statusAsString:(int)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (int)StringAsApprovalTime:(id)a0;
- (id)approvalTimeAsString:(int)a0;

@end
