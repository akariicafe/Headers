@class NSArray, NSMutableDictionary;

@interface _DECPredictionSet : NSObject {
    NSMutableDictionary *_predictionSet;
}

@property (readonly, nonatomic, getter=allValues) NSArray *allValues;

+ (id)createFromResult:(id)a0;

- (id)objectForKey:(id)a0;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (void)enumerateKeysAndObjectsUsingBlock:(id /* block */)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)objectForKeyedSubscript:(id)a0;

@end
