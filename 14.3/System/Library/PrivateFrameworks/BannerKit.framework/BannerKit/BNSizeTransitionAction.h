@class NSUUID;

@interface BNSizeTransitionAction : BSAction

@property (readonly, copy, nonatomic) NSUUID *uniqueIdentifier;
@property (readonly, nonatomic) long long sizeTransitionActionState;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } targetSize;

- (id)keyDescriptionForSetting:(unsigned long long)a0;
- (id)initWithTargetSize:(struct CGSize { double x0; double x1; })a0;
- (id)transitionCompleteAction;
- (id)_initWithUniqueIdentifier:(id)a0 state:(long long)a1 targetSize:(struct CGSize { double x0; double x1; })a2;

@end
