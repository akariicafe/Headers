@class NSData;

@interface AWDNFCTSMEndEvent : PBCodable <NSCopying> {
    struct { unsigned char timeDeltaFromReference : 1; unsigned char timestamp : 1; unsigned char lcState : 1; unsigned char status : 1; unsigned char authEnable : 1; unsigned char mfdEnable : 1; unsigned char restricted : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasStatus;
@property (nonatomic) unsigned int status;
@property (nonatomic) BOOL hasAuthEnable;
@property (nonatomic) BOOL authEnable;
@property (nonatomic) BOOL hasMfdEnable;
@property (nonatomic) BOOL mfdEnable;
@property (nonatomic) BOOL hasLcState;
@property (nonatomic) unsigned int lcState;
@property (nonatomic) BOOL hasRestricted;
@property (nonatomic) BOOL restricted;
@property (readonly, nonatomic) BOOL hasAid;
@property (retain, nonatomic) NSData *aid;
@property (readonly, nonatomic) BOOL hasDiscretionaryData;
@property (retain, nonatomic) NSData *discretionaryData;
@property (readonly, nonatomic) BOOL hasUuidReference;
@property (retain, nonatomic) NSData *uuidReference;
@property (nonatomic) BOOL hasTimeDeltaFromReference;
@property (nonatomic) unsigned long long timeDeltaFromReference;

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
