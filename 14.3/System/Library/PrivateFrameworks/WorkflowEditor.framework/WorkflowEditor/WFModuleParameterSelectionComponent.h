@class WFModuleModel;

@interface WFModuleParameterSelectionComponent : CKCompositeComponent {
    WFModuleModel *_model;
}

+ (id)newWithModel:(id)a0;

- (void).cxx_destruct;
- (void)parameterSelected:(id)a0 withIdentifier:(id)a1;

@end
