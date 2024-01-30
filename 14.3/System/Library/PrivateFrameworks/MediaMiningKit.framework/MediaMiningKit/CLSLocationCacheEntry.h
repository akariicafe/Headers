@class NSString, NSSet;

@interface CLSLocationCacheEntry : NSManagedObject

@property (class, readonly, nonatomic) NSString *entityName;

@property (nonatomic) unsigned long long muid;
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (nonatomic) BOOL coarse;
@property (nonatomic) double updateTimestamp;
@property (copy, nonatomic) NSString *address;
@property (copy, nonatomic) NSString *addressDictionaryString;
@property (copy, nonatomic) NSString *postalAddress;
@property (retain, nonatomic) NSSet *placemarks;

@end
