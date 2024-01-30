@class StoredCredential, NSString, NSData, NSDate, StoredCryptoKey;

@interface StoredPayload : NSManagedObject

@property (nonatomic, copy) NSDate *createdAt;
@property (nonatomic, copy) NSString *docType;
@property (nonatomic, copy) NSData *elementIdentifiersByNamespace;
@property (nonatomic) long long format;
@property (nonatomic, copy) NSData *ingestionHash;
@property (nonatomic, copy) NSData *payloadData;
@property (nonatomic) long long protectionType;
@property (nonatomic, copy) NSDate *updatedAt;
@property (nonatomic, copy) NSDate *validFrom;
@property (nonatomic, copy) NSDate *validUntil;
@property (nonatomic, retain) StoredCredential *credential;
@property (nonatomic, retain) StoredCryptoKey *payloadProtectionKey;
@property (nonatomic, retain) StoredCryptoKey *presentmentKey;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
