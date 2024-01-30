@class NSMutableArray;

@interface TMLArray : NSObject

@property (retain, nonatomic) NSMutableArray *array;
@property (readonly, nonatomic) unsigned long long count;

+ (id)keyPathsForValuesAffectingValueForKey:(id)a0;

- (void)remove:(unsigned long long)a0;
- (id)get:(unsigned long long)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithArray:(id)a0;
- (void)removeAllObjects;
- (void)append:(id)a0;
- (void)set:(unsigned long long)a0 value:(id)a1;

@end
