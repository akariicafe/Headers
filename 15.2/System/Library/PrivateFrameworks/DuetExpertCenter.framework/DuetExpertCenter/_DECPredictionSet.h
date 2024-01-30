@class NSArray, NSMutableDictionary;

@interface _DECPredictionSet : NSObject {
    NSMutableDictionary *_predictionSet;
}

@property (readonly, nonatomic, getter=allValues) NSArray *allValues;

+ (id)createFromResult:(id)a0;

- (void)enumerateKeysAndObjectsUsingBlock:(id /* block */)a0;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)objectForKey:(id)a0;
- (id)objectForKeyedSubscript:(id)a0;

@end
