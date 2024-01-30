@class NSArray, NSKnownKeysMappingStrategy;

@interface NSKnownKeysDictionary : NSMutableDictionary

@property (class, readonly, nonatomic) NSArray *classesForArchiving;

@property (readonly, nonatomic) NSKnownKeysMappingStrategy *mapping;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)newInstanceWithSearchStrategy:(id)a0 inData:(id)a1;

- (void)setValues:(id *)a0;
- (id)valueAtIndex:(unsigned long long)a0;
- (id)initForKeys:(id)a0;
- (void)getObjects:(id *)a0 andKeys:(id *)a1;
- (const id *)values;
- (id)initWithSearchStrategy:(id)a0;
- (void)getObjects:(id *)a0;
- (void)setValue:(id)a0 atIndex:(unsigned long long)a1;
- (void)getKeys:(id *)a0;
- (void)_setValues:(id *)a0 retain:(BOOL)a1;

@end
