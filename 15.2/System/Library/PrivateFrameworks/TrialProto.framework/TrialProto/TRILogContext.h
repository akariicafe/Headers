@class NSString, TRILogTime;

@interface TRILogContext : PBCodable <NSCopying> {
    struct { unsigned char processEventIndex : 1; unsigned char projectId : 1; } _has;
}

@property (nonatomic) BOOL hasProjectId;
@property (nonatomic) unsigned int projectId;
@property (readonly, nonatomic) BOOL hasTrackingId;
@property (retain, nonatomic) NSString *trackingId;
@property (readonly, nonatomic) BOOL hasDeviceLogTime;
@property (retain, nonatomic) TRILogTime *deviceLogTime;
@property (readonly, nonatomic) BOOL hasDeviceTrackingTime;
@property (retain, nonatomic) TRILogTime *deviceTrackingTime;
@property (nonatomic) BOOL hasProcessEventIndex;
@property (nonatomic) unsigned long long processEventIndex;

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
