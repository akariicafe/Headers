@class TRIPBMessage;

@interface TRIPBDoubleArray : NSObject <NSCopying> {
    TRIPBMessage *_autocreator;
    double *_values;
    unsigned long long _capacity;
}

@property (readonly, nonatomic) unsigned long long count;

+ (id)arrayWithValue:(double)a0;
+ (id)array;
+ (id)arrayWithValueArray:(id)a0;
+ (id)arrayWithCapacity:(unsigned long long)a0;

- (double)valueAtIndex:(unsigned long long)a0;
- (id)initWithValues:(const double *)a0 count:(unsigned long long)a1;
- (void)enumerateValuesWithBlock:(id /* block */)a0;
- (void)insertValue:(double)a0 atIndex:(unsigned long long)a1;
- (void)addValue:(double)a0;
- (void)addValues:(const double *)a0 count:(unsigned long long)a1;
- (void)enumerateValuesWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (void)addValuesFromArray:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)internalResizeToCapacity:(unsigned long long)a0;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (void)exchangeValueAtIndex:(unsigned long long)a0 withValueAtIndex:(unsigned long long)a1;
- (void)replaceValueAtIndex:(unsigned long long)a0 withValue:(double)a1;
- (unsigned long long)hash;
- (void)removeAll;
- (id)initWithValueArray:(id)a0;
- (id)init;
- (id)description;
- (void)removeValueAtIndex:(unsigned long long)a0;

@end
