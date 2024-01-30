@class NSMutableDictionary, JSContext, NSHashTable, NSError, NSMutableArray;

@interface NUJSContext : NSObject {
    NSHashTable *_collectedProxies;
    NSMutableArray *_stateStack;
    NSMutableDictionary *_functions;
}

@property (retain) JSContext *jsContext;
@property (retain, nonatomic) NSError *error;

+ (void)execute:(id /* block */)a0;
+ (id)contextForContext:(id)a0;
+ (BOOL)validateValuesAreNumbers:(id)a0 error:(out id *)a1;

- (id)currentState;
- (void)popState;
- (id)init;
- (void).cxx_destruct;
- (id)functionForKey:(id)a0;
- (void)resetAllProxies;
- (void)addProxy:(id)a0;
- (void)pushState:(id)a0;
- (void)setFunction:(id)a0 forKey:(id)a1;
- (void)setupBuiltInFunctions;

@end
