@class NSData, NSString, NSSet;

@interface PFUbiquityStoreMetadata : NSManagedObject

@property (retain, nonatomic) NSData *storeOptionsBinaryPlistData;
@property (retain, nonatomic) NSString *modelVersionHashString;
@property (retain, nonatomic) NSString *storeURLString;
@property (retain, nonatomic) NSString *ubiquityName;
@property (retain, nonatomic) NSString *storeType;
@property (retain, nonatomic) NSString *ubiquityRootURLString;
@property (retain, nonatomic) NSString *storeIdentifier;
@property (retain, nonatomic) NSString *ubiquityRelativePath;
@property (retain, nonatomic) NSSet *transactionEntries;
@property (retain, nonatomic) NSSet *peerStates;
@property (retain, nonatomic) NSSet *primaryKeyRanges;

- (id)initWithUbiquityName:(id)a0 andUbiquityRootLocation:(id)a1 insertIntoManagedObjectContext:(id)a2;

@end
