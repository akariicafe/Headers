@protocol NSObject;

@interface WFModuleComponentController : CKComponentController {
    id<NSObject> _inputVariableState;
}

- (void).cxx_destruct;
- (void)loadIconIfNecessary;
- (void)didMount;
- (void)didUpdateComponent;
- (void)willUpdateComponent;

@end
