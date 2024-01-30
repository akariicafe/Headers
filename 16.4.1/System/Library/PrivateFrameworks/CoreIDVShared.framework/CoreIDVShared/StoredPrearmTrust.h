@class NSData, NSString;

@interface StoredPrearmTrust : NSManagedObject

@property (nonatomic, copy) NSData *baaCertificate;
@property (nonatomic, copy) NSData *keyBlob;
@property (nonatomic, copy) NSString *pairingID;
@property (nonatomic) BOOL requiresDeletion;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
