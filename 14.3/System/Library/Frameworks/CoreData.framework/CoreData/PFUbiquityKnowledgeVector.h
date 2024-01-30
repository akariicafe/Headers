@class NSDictionary;

@interface PFUbiquityKnowledgeVector : NSObject <NSCoding, NSCopying, NSSecureCoding> {
    NSDictionary *_kv;
    NSDictionary *_storeKVDict;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long hash;
@property (readonly, nonatomic) unsigned long long length;

+ (id)createSetOfAllPeerIDsInKnowledgeVectors:(id)a0;
+ (id)createKnowledgeVectorDictionaryFromString:(id)a0;

- (id)init;
- (id)transactionNumberForPeerID:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (long long)compare:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithStoreKnowledgeVectorDictionary:(id)a0;
- (BOOL)isZeroVector;
- (void)updateWithKnowledgeVector:(id)a0;
- (BOOL)isAncestorOfKnowledgeVector:(id)a0;
- (id)allPeerIDs;
- (BOOL)conflictsWithKnowledgeVector:(id)a0;
- (id)createStoreKnowledgeVectorDictionary;
- (id)newKnowledgeVectorByDecrementingPeerWithID:(id)a0;
- (id)createKnowledgeVectorString;
- (id)newKnowledgeVectorBySubtractingVector:(id)a0;
- (id)description;
- (id)initWithKnowledgeVectorDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)newKnowledgeVectorByAddingKnowledgeVector:(id)a0;
- (id)createAncestorVectorForConflictingVector:(id)a0;
- (id)newKnowledgeVectorByIncrementingPeerWithID:(id)a0;
- (void)_updateHash;
- (id)createSetOfAllPeerIDsWithOtherVector:(id)a0;
- (id)initFromCopy:(id)a0 storeKVDict:(id)a1 hash:(unsigned long long)a2;
- (id)initWithKnowledgeVectorString:(id)a0;
- (BOOL)hasPeerIDInCommonWith:(id)a0;
- (id)initWithKnowledgeVectorDictionary:(id)a0 andStoreKnowledgeVectorDictionary:(id)a1;
- (BOOL)isDescendantOfKnowledgeVector:(id)a0;
- (void)decrementToMinimumWithKnowledgeVector:(id)a0;
- (BOOL)canMergeWithKnowledgeVector:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
