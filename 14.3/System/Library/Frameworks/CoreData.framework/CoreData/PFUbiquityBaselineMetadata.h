@class NSString, PFUbiquityLocation, PFUbiquityKnowledgeVector, NSMutableDictionary;

@interface PFUbiquityBaselineMetadata : NSObject <NSCoding, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *storeName;
@property (readonly) NSString *authorPeerID;
@property (readonly) NSString *modelVersionHash;
@property (readonly) PFUbiquityLocation *rootLocation;
@property (readonly, nonatomic) PFUbiquityKnowledgeVector *previousKnowledgeVector;
@property (readonly) PFUbiquityKnowledgeVector *knowledgeVector;
@property (readonly) NSMutableDictionary *peerRanges;

- (id)init;
- (id)initWithLocalPeerID:(id)a0 storeName:(id)a1 modelVersionHash:(id)a2 andUbiquityRootLocation:(id)a3;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void)setKnowledgeVector:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (BOOL)gatherMetadataWithStore:(id)a0 andError:(id *)a1;
- (id)createPeerRangeDictionary:(id)a0;
- (id)createNewLocalRangeWithRangeStart:(unsigned long long)a0 andRangeEnd:(unsigned long long)a1 forEntityNamed:(id)a2;
- (void)addDictionaryForPeerRange:(id)a0;
- (void)setPreviousKnowledgeVectorFromCurrentMetadata:(id)a0;
- (void)_migrateToModelVersionHash:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
