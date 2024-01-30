@class NSDictionary;

@interface ConfigurationParams : NSObject

@property (retain, nonatomic) NSDictionary *underlyingDictionary;

- (id)objectForKey:(id)a0;
- (void).cxx_destruct;
- (int)extractKey:(id)a0 toDouble:(double *)a1 defaultTo:(double)a2;
- (int)extractKey:(id)a0 toUint32:(unsigned int *)a1 defaultTo:(unsigned int)a2;
- (int)extractKey:(id)a0 toBool:(BOOL *)a1 defaultTo:(BOOL)a2;
- (int)extractKey:(id)a0 toUint64:(unsigned long long *)a1 defaultTo:(unsigned long long)a2;
- (int)extractKey:(id)a0 toNSUInteger:(unsigned long long *)a1 defaultTo:(unsigned long long)a2;
- (int)extractKey:(id)a0 toDouble:(double *)a1 defaultTo:(double)a2 logAs:(id)a3;
- (int)extractKey:(id)a0 toUint64:(unsigned long long *)a1 defaultTo:(unsigned long long)a2 logAs:(id)a3;
- (int)extractKey:(id)a0 toUint32:(unsigned int *)a1 defaultTo:(unsigned int)a2 logAs:(id)a3;
- (int)extractKey:(id)a0 toBOOL:(BOOL *)a1 defaultTo:(BOOL)a2;

@end
