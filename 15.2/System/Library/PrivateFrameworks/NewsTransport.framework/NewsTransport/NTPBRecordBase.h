@class NSString, NTPBDate;

@interface NTPBRecordBase : PBCodable <NSCopying> {
    struct { unsigned char cacheLifetimeHint : 1; unsigned char recordType : 1; unsigned char deletedFromCloud : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL hasChangeTag;
@property (retain, nonatomic) NSString *changeTag;
@property (readonly, nonatomic) BOOL hasModificationDate;
@property (retain, nonatomic) NTPBDate *modificationDate;
@property (readonly, nonatomic) BOOL hasFetchDate;
@property (retain, nonatomic) NTPBDate *fetchDate;
@property (nonatomic) BOOL hasDeletedFromCloud;
@property (nonatomic) BOOL deletedFromCloud;
@property (nonatomic) BOOL hasCacheLifetimeHint;
@property (nonatomic) int cacheLifetimeHint;
@property (nonatomic) BOOL hasRecordType;
@property (nonatomic) int recordType;
@property (readonly, nonatomic) BOOL hasAssetURLsDate;
@property (retain, nonatomic) NTPBDate *assetURLsDate;

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
