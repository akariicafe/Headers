@class NSArray, NSUUID, ICCRDocument, CRDictionary;

@interface ICMergeableDictionary : NSObject

@property (readonly, nonatomic) ICCRDocument *document;
@property (readonly, nonatomic) CRDictionary *dictionary;
@property (readonly, copy, nonatomic) NSArray *allKeys;
@property (readonly, copy, nonatomic) NSUUID *replicaID;

- (void)setObject:(id)a0 forKey:(id)a1;
- (id)encodedData;
- (void)removeObjectForKey:(id)a0;
- (id)objectForKey:(id)a0;
- (id)objectForKeyedSubscript:(id)a0;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (void)removeAllObjects;
- (id)description;
- (void).cxx_destruct;
- (unsigned long long)mergeWithDictionary:(id)a0;
- (id)initWithData:(id)a0 replicaID:(id)a1;

@end
