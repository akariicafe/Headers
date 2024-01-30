@class NSString;

@interface GKCDContactInfo : NSManagedObject

@property (copy, nonatomic) NSString *contactID;
@property (copy, nonatomic) NSString *familyName;
@property (copy, nonatomic) NSString *givenName;
@property (copy, nonatomic) NSString *handle;
@property (copy, nonatomic) NSString *namePrefix;
@property (copy, nonatomic) NSString *nameSuffix;
@property (copy, nonatomic) NSString *nickname;

+ (id)fetchRequest;

@end
