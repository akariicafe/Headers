@protocol UIMutableTransformerDelegate;

@interface UIMutableTransformer : UITransformer

@property (weak, nonatomic, setter=_setDelegate:) id<UIMutableTransformerDelegate> _delegate;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)addTransform:(id)a0 reason:(id)a1;
- (void)replaceTransform:(id)a0 withTransform:(id)a1 reason:(id)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)removeTransform:(id)a0;
- (void)removeAll;
- (void)_updateTransform;
- (void)_ensureTransformsStructuresExists;
- (void).cxx_destruct;

@end
