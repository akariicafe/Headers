@class NSData, NSString;

@interface AppTelemetryInvestigation : PBCodable <NSCopying> {
    long long _errorCode;
    NSString *_errorDescription;
    NSString *_errorDomain;
    NSString *_itemID;
    NSString *_lastStep;
    NSString *_operationType;
    NSString *_reason;
    NSData *_zoneName;
    BOOL _hasForegroundClients;
    BOOL _isPCSChained;
    BOOL _nonDiscretionary;
    BOOL _sharedZone;
    struct { unsigned char errorCode : 1; unsigned char hasForegroundClients : 1; unsigned char isPCSChained : 1; unsigned char nonDiscretionary : 1; unsigned char sharedZone : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasZoneName;
@property (retain, nonatomic) NSData *zoneName;
@property (nonatomic) BOOL hasSharedZone;
@property (nonatomic) BOOL sharedZone;
@property (readonly, nonatomic) BOOL hasErrorDomain;
@property (retain, nonatomic) NSString *errorDomain;
@property (nonatomic) BOOL hasErrorCode;
@property (nonatomic) long long errorCode;
@property (readonly, nonatomic) BOOL hasErrorDescription;
@property (retain, nonatomic) NSString *errorDescription;
@property (readonly, nonatomic) BOOL hasLastStep;
@property (retain, nonatomic) NSString *lastStep;
@property (readonly, nonatomic) BOOL hasItemID;
@property (retain, nonatomic) NSString *itemID;
@property (readonly, nonatomic) BOOL hasReason;
@property (retain, nonatomic) NSString *reason;
@property (readonly, nonatomic) BOOL hasOperationType;
@property (retain, nonatomic) NSString *operationType;
@property (nonatomic) BOOL hasNonDiscretionary;
@property (nonatomic) BOOL nonDiscretionary;
@property (nonatomic) BOOL hasHasForegroundClients;
@property (nonatomic) BOOL hasForegroundClients;
@property (nonatomic) BOOL hasIsPCSChained;
@property (nonatomic) BOOL isPCSChained;

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
