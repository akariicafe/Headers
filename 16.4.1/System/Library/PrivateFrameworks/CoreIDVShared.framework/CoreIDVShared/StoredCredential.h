@class NSString, NSSet, StoredCredentialOptions, NSDate;

@interface StoredCredential : NSManagedObject

@property (nonatomic, copy) NSDate *createdAt;
@property (nonatomic, copy) NSString *credentialIdentifier;
@property (nonatomic, copy) NSString *partition;
@property (nonatomic) long long state;
@property (nonatomic, copy) NSDate *updatedAt;
@property (nonatomic, retain) NSSet *cryptoKeys;
@property (nonatomic, retain) StoredCredentialOptions *options;
@property (nonatomic, retain) NSSet *payloads;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
