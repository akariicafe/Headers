@class NSString, NTPBDate;

@interface NTPBPrivateRecordSyncState : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasRecordName;
@property (retain, nonatomic) NSString *recordName;
@property (readonly, nonatomic) BOOL hasRecordZoneName;
@property (retain, nonatomic) NSString *recordZoneName;
@property (readonly, nonatomic) BOOL hasLastCleanDate;
@property (retain, nonatomic) NTPBDate *lastCleanDate;
@property (readonly, nonatomic) BOOL hasLastDirtyDate;
@property (retain, nonatomic) NTPBDate *lastDirtyDate;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
