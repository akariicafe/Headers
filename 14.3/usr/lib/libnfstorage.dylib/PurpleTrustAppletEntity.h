@class NSString, NSSet, NSObject;

@interface PurpleTrustAppletEntity : NSManagedObject

@property (retain, nonatomic) NSObject *blob;
@property (copy, nonatomic) NSString *uniqueIdentifier;
@property (nonatomic) int version;
@property (retain, nonatomic) NSSet *purpleTrust;

+ (id)fetchRequest;

@end
