@class CRDictionary, CRDocument;

@interface ICMergableDictionary : NSObject

@property (retain, nonatomic) CRDocument *underlyingDocument;
@property (retain, nonatomic) CRDictionary *underlyingDictionary;

+ (id)decodeDictionaryFromData:(id)a0;
+ (id)encodedDataWithDictionary:(id)a0;

- (id)objectForKey:(id)a0;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (void).cxx_destruct;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)description;
- (id)initWithReplicaID:(id)a0;
- (id)objectForKeyedSubscript:(id)a0;
- (void)removeAllObjects;
- (BOOL)mergeWithMergableDictionary:(id)a0;
- (void)removeObjectForKey:(id)a0;

@end
