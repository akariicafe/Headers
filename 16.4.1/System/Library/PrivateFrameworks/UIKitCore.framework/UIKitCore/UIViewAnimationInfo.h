@class NSObject, NSMutableDictionary, UIView;
@protocol OS_dispatch_queue;

@interface UIViewAnimationInfo : NSObject

@property (weak) UIView *owningView;
@property (copy, nonatomic) id /* block */ invalidationBlock;
@property (retain, nonatomic) NSMutableDictionary *animatableProperties;
@property (retain, nonatomic) NSMutableDictionary *presentationModifiers;
@property (retain, nonatomic) NSMutableDictionary *modifierGroupRequestHandlers;
@property (retain, nonatomic) NSMutableDictionary *isPartOfHigherOrderProperty;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *lockingQueue;

- (void)performWithLock:(id /* block */)a0;
- (id)animatablePropertyKeys;
- (void)_invalidateIfPossible;
- (BOOL)_canInvalidate;
- (id)initWithView:(id)a0;
- (id)presentationModifierForKey:(id)a0;
- (void)setModifierGroupRequestHandler:(id)a0 forKey:(id)a1;
- (id)modifierGroupRequestHandlerForKey:(id)a0;
- (void)setAnimatableProperty:(id)a0 forKey:(id)a1;
- (void)setPresentationModifier:(id)a0 forKey:(id)a1;
- (id)animatablePropertyForKey:(id)a0 createIfNecessary:(BOOL)a1;
- (void).cxx_destruct;

@end
