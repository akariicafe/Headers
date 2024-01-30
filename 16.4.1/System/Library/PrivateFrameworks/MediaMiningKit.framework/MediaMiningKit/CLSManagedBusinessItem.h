@class NSString, NSNumber, CLSBusinessCacheEntry;

@interface CLSManagedBusinessItem : NSManagedObject

@property (class, readonly, nonatomic) NSString *entityName;

@property (retain, nonatomic) NSNumber *venueCapacityAsNumber;
@property (nonatomic) unsigned long long muid;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (nonatomic) double radius;
@property (nonatomic) unsigned int categories;
@property (nonatomic) long long venueCapacity;
@property (retain, nonatomic) NSString *businessCategories;
@property (retain, nonatomic) CLSBusinessCacheEntry *entry;
@property (retain, nonatomic) NSString *geoServiceProvider;
@property (retain, nonatomic) NSString *isoCountryCode;

@end
