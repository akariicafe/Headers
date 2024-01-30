@class TabDocument;

@interface TabDocumentActivity : _SFActivity

@property (readonly, nonatomic) TabDocument *tabDocument;
@property (readonly, nonatomic) BOOL canPerformOnNewTabPage;
@property (readonly, nonatomic) long long actionType;

- (void).cxx_destruct;
- (void)_prepareWithActivityItems:(id)a0 completion:(id /* block */)a1;
- (id)_activityImage;
- (id)_embeddedActivityViewController;
- (id)activityTitle;
- (id)_systemImageName;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (void)performActivity;
- (id)activityTitleWithTabDocument:(id)a0;
- (BOOL)canPerformWithTabDocument:(id)a0;
- (void)prepareWithTabDocument:(id)a0;
- (void)performActivityWithTabDocument:(id)a0;
- (id)systemImageNameWithTabDocument:(id)a0;
- (long long)actionTypeWithTabDocument:(id)a0;
- (id)activityImageWithTabDocument:(id)a0;
- (void)prepareWithTabDocument:(id)a0 completion:(id /* block */)a1;
- (id)embeddedActivityViewControllerWithTabDocument:(id)a0;

@end
