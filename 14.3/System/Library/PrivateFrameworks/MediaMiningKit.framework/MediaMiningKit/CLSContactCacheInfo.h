@class NSString, NSData;

@interface CLSContactCacheInfo : NSManagedObject

@property (class, readonly, nonatomic) NSString *entityName;

@property (nonatomic) NSData *lastHistoryToken;

@end
