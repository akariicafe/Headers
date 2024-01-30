@class NSString, NSData;

@interface StoredTrustKey : NSManagedObject

@property (nonatomic, copy) NSString *pairingID;
@property (nonatomic, copy) NSData *protectedPublicKey;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
