@class NSKnownKeysMappingStrategy;

@interface NSKnownKeysDictionary : NSMutableDictionary

@property (readonly, nonatomic) NSKnownKeysMappingStrategy *mapping;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)alloc;
+ (id)newInstanceWithSearchStrategy:(id)a0 inData:(id)a1;

- (void)setValues:(id *)a0;
- (const id *)values;
- (id)initForKeys:(id)a0;
- (id)valueAtIndex:(unsigned long long)a0;
- (void)getObjects:(id *)a0;
- (void)getObjects:(id *)a0 andKeys:(id *)a1;
- (void)_setValues:(id *)a0 retain:(BOOL)a1;
- (void)setValue:(id)a0 atIndex:(unsigned long long)a1;
- (void)getKeys:(id *)a0;
- (id)initWithSearchStrategy:(id)a0;

@end
