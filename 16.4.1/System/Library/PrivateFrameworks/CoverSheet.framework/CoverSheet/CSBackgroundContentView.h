@class NSString, UIView;
@protocol UIScenePresentation;

@interface CSBackgroundContentView : UIView <CSWallpaperView>

@property (readonly, nonatomic) UIView<UIScenePresentation> *presentationView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setBackgroundStyle:(long long)a0;
- (void)setCoverSheetWallpaperStyle:(long long)a0;
- (void)layoutSubviews;
- (void)setFullscreen:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithPresentationView:(id)a0;

@end
