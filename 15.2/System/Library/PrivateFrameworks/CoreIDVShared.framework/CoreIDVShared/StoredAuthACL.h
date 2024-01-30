@class NSData, NSString;

@interface StoredAuthACL : NSManagedObject

@property (nonatomic) long long aclType;
@property (nonatomic, copy) NSData *credentialUUIDs;
@property (nonatomic, copy) NSData *encryptedACL;
@property (nonatomic, copy) NSString *identifier;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
