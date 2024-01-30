@class NSArray;

@interface PLRevGeoMapItem : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *sortedPlaceInfos;
@property (readonly, nonatomic) NSArray *backupPlaceInfos;
@property (readonly, nonatomic) NSArray *finalPlaceInfos;

+ (id)mapItemWithGEOMapItem:(id)a0;
+ (id)placeInfoWithName:(id)a0 geoPlaceInfo:(id)a1 dominantOrderType:(unsigned long long)a2;
+ (id /* block */)sortedAdditionalPlaceInfoComparator;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithSortedPlaceInfos:(id)a0 backupPlaceInfos:(id)a1 finalPlaceInfos:(id)a2;

@end
