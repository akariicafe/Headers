@class NSString, NSSet;

@interface PlusStorefrontCoreDataRecord : NSManagedObject

@property (nonatomic, copy) NSString *countryCode;
@property (nonatomic, copy) NSString *storefrontId;
@property (nonatomic, retain) NSSet *storefrontMediaReferences;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
