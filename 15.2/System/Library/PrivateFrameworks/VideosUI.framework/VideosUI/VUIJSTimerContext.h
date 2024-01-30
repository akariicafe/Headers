@class NSTimer, JSManagedValue, VUIJSManagedArray;

@interface VUIJSTimerContext : NSObject

@property (retain, nonatomic) NSTimer *timer;
@property (readonly, retain, nonatomic) id ownerObject;
@property (readonly, retain, nonatomic) JSManagedValue *managedCallback;
@property (readonly, retain, nonatomic) VUIJSManagedArray *managedArgs;
@property (readonly, nonatomic) BOOL isRepeating;

- (id)description;
- (void).cxx_destruct;
- (void)dealloc;
- (void)removeManagedReferences;
- (id)initWithCallback:(id)a0 callbackArgs:(id)a1 repeating:(BOOL)a2 ownerObject:(id)a3 timer:(id)a4;

@end
