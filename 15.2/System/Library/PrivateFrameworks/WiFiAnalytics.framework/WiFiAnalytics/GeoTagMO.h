@class BSSMO, NSDate;

@interface GeoTagMO : NSManagedObject

@property (copy, nonatomic) NSDate *date;
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (nonatomic) int taggedCount;
@property (retain, nonatomic) BSSMO *bss;

+ (id)entityName;
+ (id)fetchRequest;
+ (id)generateInstance:(id)a0;
+ (BOOL)isNetworkWithinRangeOfLocation:(id)a0 range:(double)a1 location:(id)a2 moc:(id)a3 count:(unsigned long long *)a4;
+ (id)geoTagsAtLocationInBand:(id)a0 distance:(double)a1 band:(unsigned int)a2 moc:(id)a3;
+ (id)geoTagsForNetwork:(id)a0 moc:(id)a1;
+ (id)geoTagsInBandForNetwork:(unsigned int)a0 ssid:(id)a1 moc:(id)a2;

@end
