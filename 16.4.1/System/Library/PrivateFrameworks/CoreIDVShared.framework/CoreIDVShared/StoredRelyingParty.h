@class NSString, NSSet;

@interface StoredRelyingParty : NSManagedObject

@property (nonatomic, copy) NSString *relyingPartyIdentifier;
@property (nonatomic, retain) NSSet *presentmentKeys;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
