@class WFModuleModel;
@protocol WFComponentNavigationContext;

@interface WFModuleHeadingComponent : CKCompositeComponent

@property (readonly, nonatomic) WFModuleModel *model;
@property (readonly, weak, nonatomic) id<WFComponentNavigationContext> navigationContext;

+ (id)newWithModel:(id)a0 navigationContext:(id)a1;

- (void).cxx_destruct;
- (void)removeButtonTapped:(id)a0;
- (void)settingsButtonTapped;
- (void)titleComponentTapped:(id)a0;

@end
