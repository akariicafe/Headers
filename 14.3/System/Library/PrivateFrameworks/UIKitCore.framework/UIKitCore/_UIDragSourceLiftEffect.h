@class NSString, NSMapTable;

@interface _UIDragSourceLiftEffect : NSObject <UIDragInteractionEffect> {
    NSMapTable *_liftOperationByContext;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)interaction:(id)a0 didChangeWithContext:(id)a1;
- (void)_installInteractionPlattersForOperation:(id)a0;
- (void)_addworkaroundForPropertyAnimator:(id)a0 inView:(id)a1;
- (void)_setInteractionEffectsLifted:(BOOL)a0 withOperation:(id)a1;
- (void)_uninstallInteractionPlattersForOperation:(id)a0;

@end
