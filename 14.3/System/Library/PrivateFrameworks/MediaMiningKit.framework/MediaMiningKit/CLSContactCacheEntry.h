@class NSString;

@interface CLSContactCacheEntry : NSManagedObject

@property (class, readonly, nonatomic) NSString *entityName;

@property (nonatomic) NSString *contactIdentifier;
@property (nonatomic) BOOL hasPicture;
@property (nonatomic) NSString *classifiedPersonLocalIdentifierWithFaceModelID;
@property (nonatomic) double updateTimestamp;

- (id)cachedContact;

@end
