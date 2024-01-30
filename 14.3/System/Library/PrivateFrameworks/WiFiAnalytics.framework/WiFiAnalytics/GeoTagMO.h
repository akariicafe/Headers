@class BSSMO, NSDate;

@interface GeoTagMO : NSManagedObject

@property (copy, nonatomic) NSDate *date;
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (nonatomic) int taggedCount;
@property (retain, nonatomic) BSSMO *bss;

+ (id)entityName;
+ (id)fetchRequest;

@end
