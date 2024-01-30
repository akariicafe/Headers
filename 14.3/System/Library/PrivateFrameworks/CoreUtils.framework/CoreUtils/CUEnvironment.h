@class NSMutableDictionary;

@interface CUEnvironment : NSObject {
    NSMutableDictionary *_objects;
}

- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (void).cxx_destruct;
- (id)description;
- (id)objectForKeyedSubscript:(id)a0;

@end
