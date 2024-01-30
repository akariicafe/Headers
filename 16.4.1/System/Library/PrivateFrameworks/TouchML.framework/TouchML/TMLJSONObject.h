@class NSString, NSDictionary, NSData, TMLJSONSchema, NSMutableDictionary, NSMutableSet;

@interface TMLJSONObject : NSObject <NSCopying, TMLObservable> {
    NSMutableDictionary *_derived;
    NSMutableSet *_observers;
}

@property (readonly, nonatomic) TMLJSONSchema *SCHEMA;
@property (copy, nonatomic) NSDictionary *rawJSON;
@property (copy, nonatomic) NSData *DATA;
@property (copy, nonatomic) NSString *STRING;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyPathsForValuesAffectingValueForKey:(id)a0;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (id)tmlPropertyWithKeyPath:(id)a0;

- (id)valueForKeyPath:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)valueForKey:(id)a0;
- (void).cxx_destruct;
- (id)initWithSchema:(id)a0;
- (void)setRawJSONSync:(id)a0;
- (void)setRawJSONAsync:(id)a0 completion:(id /* block */)a1;
- (id)initWithSchema:(id)a0 json:(id)a1;
- (BOOL)internalSetJSON:(id)a0;
- (void)internalValidateJSON:(id)a0 completion:(id /* block */)a1;
- (void)notifyAllObservers;
- (id)rawValueForKeyPath:(id)a0 dictionary:(id)a1;
- (void)tmlAddObserver:(id)a0 forKeyPath:(id)a1 callback:(id /* block */)a2;
- (void)tmlRemoveObserver:(id)a0 forKeyPath:(id)a1;
- (void)validateJSON:(id)a0 completion:(id /* block */)a1;

@end
