@interface SBFloatyFolderController : SBFolderController

@property (nonatomic) unsigned long long backgroundEffect;

+ (Class)_contentViewClass;
+ (Class)configurationClass;
+ (id)iconLocation;

- (BOOL)isDisplayingIcon:(id)a0 inLocation:(id)a1;
- (id)presentedIconLocations;
- (BOOL)isPresentingIconLocation:(id)a0;
- (BOOL)isDisplayingIconView:(id)a0 inLocation:(id)a1;
- (id)floatyFolderView;
- (void)folderView:(id)a0 didBeginEditingTitle:(id)a1;
- (void)folderView:(id)a0 didEndEditingTitle:(id)a1;

@end
