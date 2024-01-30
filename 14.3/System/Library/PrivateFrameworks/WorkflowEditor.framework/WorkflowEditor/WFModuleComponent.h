@class WFModuleModel, NSString;

@interface WFModuleComponent : CKMemoizingComponent <WFParameterEventObserver, WFActionEventObserver>

@property (readonly, nonatomic) WFModuleModel *model;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)newWithModel:(id)a0 navigationContext:(id)a1;

- (void).cxx_destruct;
- (void)actionNameDidChange:(id)a0;
- (void)action:(id)a0 parameterStateDidChangeForKey:(id)a1;
- (void)parameterAttributesDidChange:(id)a0;
- (void)reflowComponentSynchronously;
- (struct CKComponentBoundsAnimation { double x0; double x1; unsigned long long x2; unsigned long long x3; double x4; double x5; })boundsAnimationFromPreviousComponent:(id)a0;
- (void)reflowComponentAsynchronously;

@end
