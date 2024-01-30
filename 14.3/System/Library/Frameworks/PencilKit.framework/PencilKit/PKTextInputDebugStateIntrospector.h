@class PKTextInputInteraction;
@protocol PKTextInputDebugStateIntrospectorDelegate;

@interface PKTextInputDebugStateIntrospector : NSObject

@property (readonly, weak, nonatomic) PKTextInputInteraction *interaction;
@property (weak, nonatomic) id<PKTextInputDebugStateIntrospectorDelegate> delegate;

+ (void)debugStateDidChange;
+ (id)debugStateLineDescriptionForIntrospectable:(id)a0;
+ (id)_knownInstances;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithInteraction:(id)a0;
- (id)fullDebugStateDescription;
- (id)debugStateKeys;
- (id)debugStateTitleForStateKey:(id)a0;
- (id)debugStateDescriptionForStateKey:(id)a0;
- (BOOL)debugStateCanShowDetailsForStateKey:(id)a0;
- (id)debugStateDetailViewControllerForStateKey:(id)a0;
- (void)_debugStateDidChange;
- (id)_introspectableForStateKey:(id)a0;

@end
