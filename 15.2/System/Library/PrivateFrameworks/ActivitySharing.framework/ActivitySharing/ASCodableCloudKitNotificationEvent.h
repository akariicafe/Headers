@class NSData;

@interface ASCodableCloudKitNotificationEvent : PBCodable <NSCopying> {
    struct { unsigned char date : 1; unsigned char triggerSnapshotIndex : 1; unsigned char type : 1; } _has;
}

@property (nonatomic) BOOL hasDate;
@property (nonatomic) double date;
@property (nonatomic) BOOL hasType;
@property (nonatomic) long long type;
@property (readonly, nonatomic) BOOL hasTriggerUUID;
@property (retain, nonatomic) NSData *triggerUUID;
@property (nonatomic) BOOL hasTriggerSnapshotIndex;
@property (nonatomic) long long triggerSnapshotIndex;

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
