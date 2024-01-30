@class StoredCredential;

@interface StoredCredentialOptions : NSManagedObject

@property (nonatomic) long long deleteInactiveKeysAfterDays;
@property (nonatomic) long long deleteIncompleteCredentialAfterDays;
@property (nonatomic) long long payloadProtectionPolicy;
@property (nonatomic) long long presentmentAuthPolicy;
@property (nonatomic) long long readerAuthenticationPolicy;
@property (nonatomic, retain) StoredCredential *credential;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
