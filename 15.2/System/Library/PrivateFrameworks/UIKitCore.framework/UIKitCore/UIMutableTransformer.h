@protocol UIMutableTransformerDelegate;

@interface UIMutableTransformer : UITransformer

@property (weak, nonatomic, setter=_setDelegate:) id<UIMutableTransformerDelegate> _delegate;

- (void)removeAll;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_updateTransform;
- (void)_ensureTransformsStructuresExists;
- (void)addTransform:(id)a0 reason:(id)a1;
- (void)replaceTransform:(id)a0 withTransform:(id)a1 reason:(id)a2;
- (void)removeTransform:(id)a0;

@end
