@class NSString, NSMutableArray, AWDHomeKitVendorInformation;

@interface AWDHomeKitAccessoryReadWrite : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char certified : 1; unsigned char consecutiveFailureCount : 1; unsigned char duration : 1; unsigned char errorCode : 1; unsigned char source : 1; unsigned char timeElapsedSinceFirstFailure : 1; unsigned char transportType : 1; unsigned char underlyingErrorCode : 1; unsigned char isCached : 1; unsigned char isNoeAccessory : 1; unsigned char isRemote : 1; unsigned char isRemoteAccessAllowed : 1; unsigned char isRemotelyReachable : 1; unsigned char isResidentAvailable : 1; unsigned char isSentOverNoe : 1; unsigned char isTimedWrite : 1; unsigned char isWrite : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) unsigned int duration;
@property (nonatomic) BOOL hasErrorCode;
@property (nonatomic) int errorCode;
@property (nonatomic) BOOL hasIsWrite;
@property (nonatomic) BOOL isWrite;
@property (nonatomic) BOOL hasIsRemote;
@property (nonatomic) BOOL isRemote;
@property (retain, nonatomic) NSMutableArray *characteristics;
@property (nonatomic) BOOL hasTransportType;
@property (nonatomic) int transportType;
@property (readonly, nonatomic) BOOL hasVendorDetails;
@property (retain, nonatomic) AWDHomeKitVendorInformation *vendorDetails;
@property (readonly, nonatomic) BOOL hasTransaction;
@property (retain, nonatomic) NSString *transaction;
@property (nonatomic) BOOL hasIsTimedWrite;
@property (nonatomic) BOOL isTimedWrite;
@property (readonly, nonatomic) BOOL hasTransportProtocolVersion;
@property (retain, nonatomic) NSString *transportProtocolVersion;
@property (nonatomic) BOOL hasSource;
@property (nonatomic) int source;
@property (nonatomic) BOOL hasCertified;
@property (nonatomic) int certified;
@property (nonatomic) BOOL hasIsCached;
@property (nonatomic) BOOL isCached;
@property (readonly, nonatomic) BOOL hasUnderlyingErrorDomain;
@property (retain, nonatomic) NSString *underlyingErrorDomain;
@property (nonatomic) BOOL hasUnderlyingErrorCode;
@property (nonatomic) unsigned int underlyingErrorCode;
@property (readonly, nonatomic) BOOL hasPrimaryServiceType;
@property (retain, nonatomic) NSString *primaryServiceType;
@property (nonatomic) BOOL hasIsResidentAvailable;
@property (nonatomic) BOOL isResidentAvailable;
@property (nonatomic) BOOL hasIsRemoteAccessAllowed;
@property (nonatomic) BOOL isRemoteAccessAllowed;
@property (nonatomic) BOOL hasIsRemotelyReachable;
@property (nonatomic) BOOL isRemotelyReachable;
@property (nonatomic) BOOL hasConsecutiveFailureCount;
@property (nonatomic) unsigned int consecutiveFailureCount;
@property (nonatomic) BOOL hasTimeElapsedSinceFirstFailure;
@property (nonatomic) unsigned int timeElapsedSinceFirstFailure;
@property (nonatomic) BOOL hasIsNoeAccessory;
@property (nonatomic) BOOL isNoeAccessory;
@property (nonatomic) BOOL hasIsSentOverNoe;
@property (nonatomic) BOOL isSentOverNoe;
@property (readonly, nonatomic) BOOL hasAppIdentifier;
@property (retain, nonatomic) NSString *appIdentifier;
@property (readonly, nonatomic) BOOL hasClientMetricIdentifier;
@property (retain, nonatomic) NSString *clientMetricIdentifier;

+ (Class)characteristicsType;

- (int)StringAsSource:(id)a0;
- (id)sourceAsString:(int)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (int)StringAsTransportType:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)transportTypeAsString:(int)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)addCharacteristics:(id)a0;
- (id)characteristicsAtIndex:(unsigned long long)a0;
- (unsigned long long)characteristicsCount;
- (void)clearCharacteristics;
- (int)StringAsCertified:(id)a0;
- (id)certifiedAsString:(int)a0;

@end
