@interface AWDHomeKitPresenceReport : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char authStatus : 1; unsigned char computeStatus : 1; unsigned char direction : 1; unsigned char reason : 1; unsigned char resultErrorCode : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasAuthStatus;
@property (nonatomic) int authStatus;
@property (nonatomic) BOOL hasComputeStatus;
@property (nonatomic) int computeStatus;
@property (nonatomic) BOOL hasReason;
@property (nonatomic) int reason;
@property (nonatomic) BOOL hasDirection;
@property (nonatomic) int direction;
@property (nonatomic) BOOL hasResultErrorCode;
@property (nonatomic) int resultErrorCode;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)reasonAsString:(int)a0;
- (int)StringAsReason:(id)a0;
- (id)authStatusAsString:(int)a0;
- (int)StringAsAuthStatus:(id)a0;
- (id)computeStatusAsString:(int)a0;
- (int)StringAsComputeStatus:(id)a0;
- (id)directionAsString:(int)a0;
- (int)StringAsDirection:(id)a0;

@end
