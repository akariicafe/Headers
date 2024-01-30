@class NSMutableDictionary, NSMutableArray;

@interface TSCH3DOrderedDictionary : NSObject <NSFastEnumeration> {
    NSMutableDictionary *_store;
    NSMutableArray *_keyOrder;
}

@property (readonly, nonatomic) unsigned long long count;

+ (id)dictionary;
+ (id)dictionaryWithMutableDictionaryStore:(id)a0;

- (void)setObject:(id)a0 forKey:(id)a1;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)objectForKey:(id)a0;
- (id)lastObject;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)lastKey;
- (id)initWithMutableDictionaryStore:(id)a0;

@end
