@class NSString, NSMutableArray;

@interface AWDSiriSession : PBCodable <NSCopying> {
    struct { unsigned char sessionEndTimestamp : 1; unsigned char sessionStartTimestamp : 1; unsigned char timestamp : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasSessionStartTimestamp;
@property (nonatomic) unsigned long long sessionStartTimestamp;
@property (nonatomic) BOOL hasSessionEndTimestamp;
@property (nonatomic) unsigned long long sessionEndTimestamp;
@property (readonly, nonatomic) BOOL hasCompanionModel;
@property (retain, nonatomic) NSString *companionModel;
@property (readonly, nonatomic) BOOL hasCompanionOS;
@property (retain, nonatomic) NSString *companionOS;
@property (retain, nonatomic) NSMutableArray *siriRequests;

+ (Class)siriRequestType;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (id)dictionaryRepresentation;
- (void)addSiriRequest:(id)a0;
- (unsigned long long)siriRequestsCount;
- (void)clearSiriRequests;
- (id)siriRequestAtIndex:(unsigned long long)a0;

@end
