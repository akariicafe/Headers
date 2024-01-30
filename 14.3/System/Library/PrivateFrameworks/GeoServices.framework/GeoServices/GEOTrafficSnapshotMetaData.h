@class NSString, NSMutableArray, PBDataReader;

@interface GEOTrafficSnapshotMetaData : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSString *_basemapId;
    NSString *_branchId;
    NSString *_environment;
    NSString *_feedId;
    NSString *_isoCountryCode;
    unsigned long long _publishTime;
    NSMutableArray *_regions;
    NSString *_snapshotId;
    NSString *_vendorSnapshotId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _maxAgeSeconds;
    int _vendor;
    struct { unsigned char has_publishTime : 1; unsigned char has_maxAgeSeconds : 1; unsigned char has_vendor : 1; unsigned char read_basemapId : 1; unsigned char read_branchId : 1; unsigned char read_environment : 1; unsigned char read_feedId : 1; unsigned char read_isoCountryCode : 1; unsigned char read_regions : 1; unsigned char read_snapshotId : 1; unsigned char read_vendorSnapshotId : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasPublishTime;
@property (nonatomic) unsigned long long publishTime;
@property (readonly, nonatomic) BOOL hasFeedId;
@property (retain, nonatomic) NSString *feedId;
@property (readonly, nonatomic) BOOL hasIsoCountryCode;
@property (retain, nonatomic) NSString *isoCountryCode;
@property (readonly, nonatomic) BOOL hasBranchId;
@property (retain, nonatomic) NSString *branchId;
@property (readonly, nonatomic) BOOL hasEnvironment;
@property (retain, nonatomic) NSString *environment;
@property (readonly, nonatomic) BOOL hasSnapshotId;
@property (retain, nonatomic) NSString *snapshotId;
@property (nonatomic) BOOL hasVendor;
@property (nonatomic) int vendor;
@property (retain, nonatomic) NSMutableArray *regions;
@property (readonly, nonatomic) BOOL hasBasemapId;
@property (retain, nonatomic) NSString *basemapId;
@property (readonly, nonatomic) BOOL hasVendorSnapshotId;
@property (retain, nonatomic) NSString *vendorSnapshotId;
@property (nonatomic) BOOL hasMaxAgeSeconds;
@property (nonatomic) unsigned int maxAgeSeconds;

+ (Class)regionsType;
+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (unsigned long long)regionsCount;
- (id)initWithData:(id)a0;
- (void)addRegions:(id)a0;
- (void)clearRegions;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;
- (id)regionsAtIndex:(unsigned long long)a0;
- (id)vendorAsString:(int)a0;
- (int)StringAsVendor:(id)a0;

@end
