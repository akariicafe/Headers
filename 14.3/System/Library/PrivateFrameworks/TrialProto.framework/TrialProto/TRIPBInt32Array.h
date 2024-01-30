@class TRIPBMessage;

@interface TRIPBInt32Array : NSObject <NSCopying> {
    TRIPBMessage *_autocreator;
    int *_values;
    unsigned long long _capacity;
}

@property (readonly, nonatomic) unsigned long long count;

+ (id)array;
+ (id)arrayWithCapacity:(unsigned long long)a0;
+ (id)arrayWithValue:(int)a0;
+ (id)arrayWithValueArray:(id)a0;

- (void)addValue:(int)a0;
- (int)valueAtIndex:(unsigned long long)a0;
- (void)removeAll;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithCapacity:(unsigned long long)a0;
- (id)initWithValues:(const int *)a0 count:(unsigned long long)a1;
- (void)enumerateValuesWithBlock:(id /* block */)a0;
- (void)addValuesFromArray:(id)a0;
- (id)initWithValueArray:(id)a0;
- (void)internalResizeToCapacity:(unsigned long long)a0;
- (void)enumerateValuesWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (void)addValues:(const int *)a0 count:(unsigned long long)a1;
- (void)insertValue:(int)a0 atIndex:(unsigned long long)a1;
- (void)replaceValueAtIndex:(unsigned long long)a0 withValue:(int)a1;
- (void)removeValueAtIndex:(unsigned long long)a0;
- (void)exchangeValueAtIndex:(unsigned long long)a0 withValueAtIndex:(unsigned long long)a1;

@end
