@class NSMutableDictionary;

@interface CUEnvironment : NSObject {
    NSMutableDictionary *_objects;
}

- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (id)description;
- (void).cxx_destruct;
- (id)objectForKeyedSubscript:(id)a0;

@end
