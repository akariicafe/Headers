@class NSString, PFUbiquityLocation, PFUbiquityKnowledgeVector, NSMutableDictionary;

@interface PFUbiquityBaselineMetadata : NSObject <NSCoding, NSSecureCoding> {
    NSString *_storeName;
    NSString *_authorPeerID;
    NSString *_modelVersionHash;
    PFUbiquityLocation *_rootLocation;
    PFUbiquityKnowledgeVector *_pKV;
    PFUbiquityKnowledgeVector *_kv;
    NSMutableDictionary *_peerRanges;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)createNewLocalRangeWithRangeStart:(unsigned long long)a0 andRangeEnd:(unsigned long long)a1 forEntityNamed:(id)a2;
- (void)addDictionaryForPeerRange:(id)a0;
- (id)createPeerRangeDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (id)initWithLocalPeerID:(id)a0 storeName:(id)a1 modelVersionHash:(id)a2 andUbiquityRootLocation:(id)a3;

@end
