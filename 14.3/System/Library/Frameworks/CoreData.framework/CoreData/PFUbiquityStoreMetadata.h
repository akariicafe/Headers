@class NSString, NSDictionary, NSURL, PFUbiquityLocation, NSData, NSSet;

@interface PFUbiquityStoreMetadata : NSManagedObject

@property (retain, nonatomic) NSDictionary *storeOptions;
@property (readonly, nonatomic) NSURL *ubiquityRootURL;
@property (readonly) PFUbiquityLocation *ubiquityRootLocation;
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

+ (id)metadataForStoreWithName:(id)a0 inManagedObjectContext:(id)a1;
+ (id)storeMetadatasWithName:(id)a0 inManagedObjectContext:(id)a1;
+ (id)baselineRootDirectoryForUbiquityName:(id)a0 andUbiquityLogURL:(id)a1;
+ (BOOL)isBaselineRootURL:(id)a0;
+ (id)allStoreMetadataInManagedObjectContext:(id)a0;
+ (id)baselineStoreURLForUbiquityName:(id)a0 andUbiquityLogURL:(id)a1;
+ (id)baselineModelURLForUbiquityName:(id)a0 andUbiquityLogURL:(id)a1;
+ (id)baselineGCModelURLForUbiquityName:(id)a0 andUbiquityLogURL:(id)a1;
+ (id)baselineMetaFileURLForUbiquityName:(id)a0 andUbiquityLogURL:(id)a1;

- (id)peerStateForPeerID:(id)a0;
- (void)updateWithStore:(id)a0 andRootLocation:(id)a1;
- (id)initWithUbiquityName:(id)a0 andUbiquityRootLocation:(id)a1 insertIntoManagedObjectContext:(id)a2;
- (void)loadFromBaselineMetadata:(id)a0 withLocalPeerID:(id)a1;
- (void)updatePeerStatesToMatchKnowledgeVector:(id)a0;

@end
