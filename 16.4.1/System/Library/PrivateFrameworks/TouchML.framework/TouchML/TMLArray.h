@class NSMutableArray;

@interface TMLArray : NSObject

@property (retain, nonatomic) NSMutableArray *array;
@property (readonly, nonatomic) unsigned long long count;

+ (id)keyPathsForValuesAffectingValueForKey:(id)a0;

- (id)initWithArray:(id)a0;
- (void)remove:(unsigned long long)a0;
- (void)set:(unsigned long long)a0 value:(id)a1;
- (void)removeAllObjects;
- (id)init;
- (id)get:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)append:(id)a0;

@end
