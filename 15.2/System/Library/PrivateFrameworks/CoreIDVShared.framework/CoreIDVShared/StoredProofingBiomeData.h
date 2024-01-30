@class NSString;

@interface StoredProofingBiomeData : NSManagedObject

@property (nonatomic) BOOL isDonated;
@property (nonatomic, copy) NSString *proofingDecision;
@property (nonatomic, copy) NSString *proofingSessionID;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
