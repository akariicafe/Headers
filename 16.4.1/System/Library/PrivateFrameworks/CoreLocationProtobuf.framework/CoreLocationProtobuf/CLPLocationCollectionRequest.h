@class NSString, CLPMeta, CLPAccessoryMeta, CLPLocationProcessingPipelineMetadata, NSMutableArray;

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
@property (readonly, nonatomic) BOOL hasPipelineMetadata;
@property (retain, nonatomic) CLPLocationProcessingPipelineMetadata *pipelineMetadata;

+ (Class)locationType;
+ (Class)accessoryLocationType;
+ (Class)appBundleIdsType;

- (void)clearLocations;
- (void)addLocation:(id)a0;
- (unsigned int)requestTypeCode;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (Class)responseClass;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)locationAtIndex:(unsigned long long)a0;
- (unsigned long long)locationsCount;
- (void)addAppBundleIds:(id)a0;
- (id)appBundleIdsAtIndex:(unsigned long long)a0;
- (unsigned long long)appBundleIdsCount;
- (void)clearAppBundleIds;
- (id)accessoryLocationAtIndex:(unsigned long long)a0;
- (unsigned long long)accessoryLocationsCount;
- (void)addAccessoryLocation:(id)a0;
- (void)clearAccessoryLocations;

@end
