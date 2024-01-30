@class UIImageView, NSString;

@interface CAMSharedLibraryButton : CAMExpandableMenuButton <CAMAccessibilityHUDImageProvider>

@property (readonly, nonatomic) UIImageView *_glyphView;
@property (nonatomic) long long sharedLibraryMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithLayoutStyle:(long long)a0;
- (long long)numberOfMenuItems;
- (id)headerView;
- (id)imageForAccessibilityHUD;
- (void).cxx_destruct;
- (long long)_indexForSharedLibraryMode:(long long)a0;
- (void)_updateImageForCurrentState;

@end
