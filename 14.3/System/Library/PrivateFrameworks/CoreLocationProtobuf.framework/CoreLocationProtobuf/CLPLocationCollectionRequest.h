@class NSString, CLPMeta, CLPAccessoryMeta, NSMutableArray;

@interface CLPLocationCollectionRequest : PBRequest <NSCopying> {
    struct { unsigned char mcc : 1; unsigned char mnc : 1; unsigned char rat : 1; } _has;
}

@property (retain, nonatomic) CLPMeta *meta;
@property (retain, nonatomic) NSMutableArray *locations;
@property (readonly, nonatomic) BOOL hasAppBundleId;
@property (retain, nonatomic) NSString *appBundleId;
@property (retain, nonatomic) NSString *tripId;
@property (nonatomic) BOOL hasRat;
@property (nonatomic) int rat;
@property (nonatomic) BOOL hasMcc;
@property (nonatomic) int mcc;
@property (nonatomic) BOOL hasMnc;
@property (nonatomic) int mnc;
@property (retain, nonatomic) NSMutableArray *appBundleIds;
@property (readonly, nonatomic) BOOL hasAccessoryMeta;
@property (retain, nonatomic) CLPAccessoryMeta *accessoryMeta;
@property (retain, nonatomic) NSMutableArray *accessoryLocations;

+ (Class)locationType;
+ (Class)appBundleIdsType;
+ (Class)accessoryLocationType;

- (Class)responseClass;
- (void)addLocation:(id)a0;
- (void)clearLocations;
- (unsigned int)requestTypeCode;
- (void).cxx_destruct;
- (id)locationAtIndex:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)locationsCount;
- (void)addAppBundleIds:(id)a0;
- (void)addAccessoryLocation:(id)a0;
- (unsigned long long)appBundleIdsCount;
- (void)clearAppBundleIds;
- (id)appBundleIdsAtIndex:(unsigned long long)a0;
- (unsigned long long)accessoryLocationsCount;
- (void)clearAccessoryLocations;
- (id)accessoryLocationAtIndex:(unsigned long long)a0;

@end
