@class NSString, StoredProofingSession;

@interface StoredUploadAsset : NSManagedObject

@property (nonatomic, copy) NSString *assetFileURL;
@property (nonatomic, copy) NSString *assetType;
@property (nonatomic, copy) NSString *recordUUID;
@property (nonatomic, retain) StoredProofingSession *proofingSession;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
