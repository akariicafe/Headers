@class TabDocument;

@interface TabDocumentActivity : _SFActivity

@property (readonly, nonatomic) TabDocument *tabDocument;
@property (readonly, nonatomic) BOOL canPerformOnNewTabPage;
@property (readonly, nonatomic) long long actionType;

- (id)activityTitle;
- (void).cxx_destruct;
- (id)_activityImage;
- (id)_systemImageName;
- (void)performActivity;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (id)_embeddedActivityViewController;
- (void)_prepareWithActivityItems:(id)a0 completion:(id /* block */)a1;
- (void)performActivityWithTabDocument:(id)a0;
- (id)systemImageNameWithTabDocument:(id)a0;
- (long long)actionTypeWithTabDocument:(id)a0;
- (id)activityImageWithTabDocument:(id)a0;
- (id)activityTitleWithTabDocument:(id)a0;
- (BOOL)canPerformWithTabDocument:(id)a0;
- (id)embeddedActivityViewControllerWithTabDocument:(id)a0;
- (void)prepareWithTabDocument:(id)a0;
- (void)prepareWithTabDocument:(id)a0 completion:(id /* block */)a1;

@end
