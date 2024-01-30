@interface SBFloatyFolderController : SBFolderController

@property (nonatomic) unsigned long long backgroundEffect;

+ (id)iconLocation;
+ (Class)_contentViewClass;
+ (Class)configurationClass;

- (BOOL)isPresentingIconLocation:(id)a0;
- (BOOL)isDisplayingIconView:(id)a0 inLocation:(id)a1;
- (BOOL)isDisplayingIcon:(id)a0 inLocation:(id)a1;
- (id)presentedIconLocations;
- (void)folderView:(id)a0 didBeginEditingTitle:(id)a1;
- (void)folderView:(id)a0 didEndEditingTitle:(id)a1;
- (id)floatyFolderView;

@end
