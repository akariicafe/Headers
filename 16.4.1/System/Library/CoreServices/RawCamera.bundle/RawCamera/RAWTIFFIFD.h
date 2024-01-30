@class NSDictionary, NSMutableDictionary;

@interface RAWTIFFIFD : NSObject

@property (retain) NSMutableDictionary *mTagsByID;
@property (retain) NSMutableDictionary *mTagsByName;
@property (retain) NSDictionary *mNamespace;
@property (retain) NSDictionary *mNamespaceReverse;

- (void)setObject:(id)a0 atIndexedSubscript:(unsigned long long)a1;
- (id)objectForKeyedSubscript:(id)a0;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)dumpMemoryInfoKey:(id)a0 indent:(unsigned long long)a1;
- (void)dumpObjCInfoKey:(id)a0 value:(id)a1 indent:(unsigned long long)a2;
- (id)initWithNamespace:(id)a0 reverseNamespace:(id)a1;

@end
