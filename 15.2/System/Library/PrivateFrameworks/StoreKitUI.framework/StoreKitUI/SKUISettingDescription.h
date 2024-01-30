@class SKUISettingsGroupDescription, SKUIViewElement;

@interface SKUISettingDescription : NSObject {
    BOOL _editsValid;
}

@property (readonly, nonatomic) BOOL allowsSelection;
@property (weak, nonatomic) SKUISettingsGroupDescription *parent;
@property (readonly, nonatomic) BOOL editsValid;
@property (retain, nonatomic) SKUIViewElement *viewElement;

+ (BOOL)allowsEdit;
+ (Class)_viewClassForSettingDescription:(id)a0;
+ (Class)viewClassForSettingDescription:(id)a0;

- (id)indexPath;
- (void)reloadData;
- (BOOL)_isHidden;
- (void)_presentViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)beginEditing;
- (void).cxx_destruct;
- (void)_dismissViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (id)initWithViewElement:(id)a0 parent:(id)a1;
- (void)cancelEdits;
- (BOOL)commitEdits:(id /* block */)a0;
- (void)discardEdits;
- (void)handleSelectionOnCompletion:(id /* block */)a0;
- (void)reloadWithViewElement:(id)a0 parent:(id)a1;
- (void)_deleteSetting;
- (void)_dispatchUpdate:(id)a0;
- (void)_hideSetting;
- (BOOL)_initiallyHidden;
- (void)_reloadSetting;
- (void)_revealSetting;
- (void)_setEditsValid:(BOOL)a0;

@end
