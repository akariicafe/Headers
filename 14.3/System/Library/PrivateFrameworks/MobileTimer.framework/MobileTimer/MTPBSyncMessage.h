@class NSString, MTPBDismissAction, MTPBSnoozeAction;

@interface MTPBSyncMessage : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasSnoozeAction;
@property (retain, nonatomic) MTPBSnoozeAction *snoozeAction;
@property (readonly, nonatomic) BOOL hasDismissAction;
@property (retain, nonatomic) MTPBDismissAction *dismissAction;
@property (nonatomic) double syncDate;
@property (retain, nonatomic) NSString *syncID;
@property (nonatomic) double syncVersion;

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
