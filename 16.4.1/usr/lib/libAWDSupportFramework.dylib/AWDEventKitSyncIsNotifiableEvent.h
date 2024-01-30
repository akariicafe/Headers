@class NSString;

@interface AWDEventKitSyncIsNotifiableEvent : PBCodable <NSCopying> {
    struct { unsigned char deltaProcessingTime : 1; unsigned char deltaTransitTime : 1; unsigned char timestamp : 1; unsigned char willTriggerNotification : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasDeltaTransitTime;
@property (nonatomic) unsigned long long deltaTransitTime;
@property (nonatomic) BOOL hasDeltaProcessingTime;
@property (nonatomic) unsigned long long deltaProcessingTime;
@property (nonatomic) BOOL hasWillTriggerNotification;
@property (nonatomic) BOOL willTriggerNotification;
@property (readonly, nonatomic) BOOL hasReason;
@property (retain, nonatomic) NSString *reason;

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
