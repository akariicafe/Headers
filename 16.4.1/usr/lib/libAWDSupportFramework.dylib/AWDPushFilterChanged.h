@class NSString;

@interface AWDPushFilterChanged : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char changedReason : 1; unsigned char changedTopicsCount : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) BOOL hasGuid;
@property (retain, nonatomic) NSString *guid;
@property (nonatomic) BOOL hasChangedReason;
@property (nonatomic) unsigned int changedReason;
@property (nonatomic) BOOL hasChangedTopicsCount;
@property (nonatomic) unsigned int changedTopicsCount;
@property (readonly, nonatomic) BOOL hasTopic;
@property (retain, nonatomic) NSString *topic;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)dealloc;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;

@end
