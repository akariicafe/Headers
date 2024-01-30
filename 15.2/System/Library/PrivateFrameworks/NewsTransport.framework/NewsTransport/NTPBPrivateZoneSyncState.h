@class NSString, NSData, NTPBDate;

@interface NTPBPrivateZoneSyncState : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasZoneName;
@property (retain, nonatomic) NSString *zoneName;
@property (readonly, nonatomic) BOOL hasChangeToken;
@property (retain, nonatomic) NSData *changeToken;
@property (readonly, nonatomic) BOOL hasLastCleanDate;
@property (retain, nonatomic) NTPBDate *lastCleanDate;
@property (readonly, nonatomic) BOOL hasLastDirtyDate;
@property (retain, nonatomic) NTPBDate *lastDirtyDate;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (id)dictionaryRepresentation;

@end
