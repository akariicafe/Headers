@class NSString, TMLMetaContext, NSArray, NSMutableDictionary, NSDictionary, JSContext, NSMutableSet, NSObject, NSMutableArray, NSException, JSValue;

@interface TMLContext : NSObject {
    TMLMetaContext *_metaContext;
    NSMutableDictionary *_objects;
    NSMutableSet *_contextObjects;
    NSMutableSet *_weakObjectIdentifiers;
    NSMutableArray *_signalHandlers;
    JSContext *_jsContext;
    NSArray *_currentEvaluationBindings;
    NSException *_jsEvaluationException;
    JSValue *_apiObject;
    NSString *_apiObjectKey;
    BOOL _initialized;
    NSMutableSet *_requires;
    unsigned long long _options;
    BOOL _beingDisposed;
}

@property (readonly, nonatomic) NSObject *rootObject;
@property (readonly, nonatomic) NSDictionary *allObjects;

+ (void)initialize;
+ (id)currentContext;
+ (void)initializeJSContext:(id)a0;
+ (BOOL)loadClasses:(id)a0;
+ (Class)createClassFromPath:(id)a0;
+ (id)loadMetaContextWithSource:(id)a0 path:(id)a1 options:(unsigned long long)a2;
+ (BOOL)loadClasses:(id)a0 path:(id)a1;
+ (BOOL)loadClassesFromPath:(id)a0;
+ (id)cloneContext:(id)a0 objects:(id)a1;
+ (void)addGloballyRequiredModules:(id)a0;
+ (void)printStatisticsWithInterval:(double)a0;

- (void)dispose;
- (BOOL)valid;
- (id)initWithOptions:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)objectWithIdentifier:(id)a0;
- (void)addObject:(id)a0 withIdentifier:(id)a1;
- (void)makeWeakObjectWithIdentifier:(id)a0;
- (BOOL)loadSourceFromPath:(id)a0;
- (BOOL)raiseException:(id)a0;
- (id)callFunction:(id)a0 arguments:(id)a1 returnType:(unsigned long long)a2;
- (BOOL)loadSource:(id)a0;
- (void)disposeIfNecessary;
- (void)requireModule:(id)a0;
- (void)raiseJSException:(id)a0;
- (id)evaluateExpression:(id)a0 ofType:(unsigned long long)a1 withBindings:(id)a2;
- (id)metaContext;
- (id)apiObject;
- (void)callFunction:(id)a0 arguments:(id)a1;
- (void)resetException;
- (BOOL)loadSource:(id)a0 path:(id)a1;
- (void)initizalizeContext;
- (void)addObjectReference:(id)a0;
- (void)initializeWithCloneContext:(id)a0;
- (id)objectWithIdentifier:(id)a0 unwrapWeak:(BOOL)a1;
- (id)objectWithIdentifier:(id)a0 unwrapWeak:(BOOL)a1 createIfMissing:(BOOL)a2;
- (id)createObjectFromMetaObject:(id)a0 parent:(id)a1;
- (id)processValue:(id)a0 ofType:(unsigned long long)a1 selfValue:(id)a2;
- (id)applyProperties:(id)a0 inOrder:(id)a1 toObject:(id)a2;
- (id)didCreateObject:(id)a0;
- (void)attachToAPIObject;
- (void)initializeJSContext;
- (id)existingObjectWithIdentifier:(id)a0;
- (void)resetJSException;
- (id)objectWithIdentifierNoCreate:(id)a0;
- (id)objectsOfType:(id)a0;

@end
