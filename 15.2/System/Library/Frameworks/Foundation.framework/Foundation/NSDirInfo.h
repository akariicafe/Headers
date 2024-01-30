@class NSMutableDictionary;

@interface NSDirInfo : NSMutableDictionary {
    NSMutableDictionary *dict;
}

- (id)initWithObjects:(const id *)a0 forKeys:(const id *)a1 count:(unsigned long long)a2;
- (unsigned long long)writePath:(id)a0 docInfo:(id)a1 errorHandler:(id)a2 remapContents:(BOOL)a3 hardLinkPath:(id)a4;
- (void)removeObjectForKey:(id)a0;
- (id)initWithContentsOfFile:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)serializeToData;
- (id)keyEnumerator;
- (id)init;
- (id)initWithDictionary:(id)a0 copyItems:(BOOL)a1;
- (id)objectForKey:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)count;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)dealloc;

@end
