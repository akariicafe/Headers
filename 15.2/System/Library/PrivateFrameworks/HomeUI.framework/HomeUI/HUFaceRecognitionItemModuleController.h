@interface HUFaceRecognitionItemModuleController : HUItemTableModuleController

- (unsigned long long)didSelectItem:(id)a0;
- (Class)cellClassForItem:(id)a0;
- (void)setupCell:(id)a0 forItem:(id)a1;
- (void)updateCell:(id)a0 forItem:(id)a1 animated:(BOOL)a2;
- (id)presentFaceRecognitionPersonSettingsForPerson:(id)a0 personManager:(id)a1 animated:(BOOL)a2;
- (id)presentFaceRecognitionAddPersonSettingsForUnknownPersonEvent:(id)a0 animated:(BOOL)a1;

@end
