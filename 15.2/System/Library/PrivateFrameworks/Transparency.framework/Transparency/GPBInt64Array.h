@class GPBMessage;

@interface GPBInt64Array : NSObject <NSCopying> {
    GPBMessage *_autocreator;
    long long *_values;
    unsigned long long _capacity;
}

@property (readonly, nonatomic) unsigned long long count;

+ (id)arrayWithValue:(long long)a0;
+ (id)arrayWithValueArray:(id)a0;
+ (id)arrayWithCapacity:(unsigned long long)a0;
+ (id)array;

- (void)removeAll;
- (void)addValue:(long long)a0;
- (void)enumerateValuesWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (id)initWithValueArray:(id)a0;
- (void)insertValue:(long long)a0 atIndex:(unsigned long long)a1;
- (id)description;
- (void)exchangeValueAtIndex:(unsigned long long)a0 withValueAtIndex:(unsigned long long)a1;
- (long long)valueAtIndex:(unsigned long long)a0;
- (void)addValues:(const long long *)a0 count:(unsigned long long)a1;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void)enumerateValuesWithBlock:(id /* block */)a0;
- (void)addValuesFromArray:(id)a0;
- (void)internalResizeToCapacity:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithValues:(const long long *)a0 count:(unsigned long long)a1;
- (void)removeValueAtIndex:(unsigned long long)a0;
- (id)initWithCapacity:(unsigned long long)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (void)replaceValueAtIndex:(unsigned long long)a0 withValue:(long long)a1;

@end
