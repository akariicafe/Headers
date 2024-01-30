@class NSSet, UIDragInteraction, UIViewPropertyAnimator;
@protocol UIDragInteractionContext;

@interface _UIDragLiftEffectOperation : NSObject

@property (retain, nonatomic) id<UIDragInteractionContext> context;
@property (retain, nonatomic) NSSet *items;
@property (retain, nonatomic) UIDragInteraction *interaction;
@property (readonly, nonatomic) UIViewPropertyAnimator *propertyAnimator;

- (void).cxx_destruct;

@end
