@class NSString;

@interface PPLocationClusterID : NSObject <NSCopying>

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *subThoroughfare;
@property (retain, nonatomic) NSString *thoroughfare;
@property (retain, nonatomic) NSString *subLocality;
@property (retain, nonatomic) NSString *locality;
@property (retain, nonatomic) NSString *administrativeArea;

+ (BOOL)asClusterIDPlacemark:(id)a0 isEqualToPlacemark:(id)a1;
+ (id)broadenClusterId:(id)a0;
+ (id)_broaden:(id)a0;
+ (id)lookupTableWithRecords:(id)a0;
+ (void)aggregateRecords:(id)a0 toClusters:(id)a1 withLookupTable:(id)a2;
+ (id)latLongTableWithClusters:(id)a0;
+ (id)clustersWithRecords:(id)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)description;
- (id)initWithPlacemark:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithName:(id)a0 subThoroughfare:(id)a1 thoroughfare:(id)a2 subLocality:(id)a3 locality:(id)a4 administrativeArea:(id)a5;

@end
