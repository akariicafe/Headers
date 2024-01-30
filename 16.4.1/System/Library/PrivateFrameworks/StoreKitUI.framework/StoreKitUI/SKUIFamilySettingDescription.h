@class SKUISettingsFamilyViewStateCoordinator;

@interface SKUIFamilySettingDescription : SKUISettingDescription {
    SKUISettingsFamilyViewStateCoordinator *_viewStateCoordinator;
}

@property (readonly, nonatomic) long long viewState;

+ (Class)_viewClassForSettingDescription:(id)a0;

- (void).cxx_destruct;
- (BOOL)_initiallyHidden;
- (void)_updateViewState;
- (void)_updateWithViewState:(long long)a0;
- (void)handleSelectionOnCompletion:(id /* block */)a0;
- (id)initWithViewElement:(id)a0 parent:(id)a1;

@end
