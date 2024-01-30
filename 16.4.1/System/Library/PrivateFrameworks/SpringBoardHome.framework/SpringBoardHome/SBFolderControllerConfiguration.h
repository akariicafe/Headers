@class UIView, NSString, _UILegibilitySettings, SBFolderControllerAnimationContext, SBIconPageIndicatorImageSetCache, SBFolderIconImageCache, SBFolder, SBHIconImageCache;
@protocol SBNestingViewControllerDelegate, SBIconViewProviding, SBIconListLayoutProvider, SBFolderControllerDelegate;

@interface SBFolderControllerConfiguration : NSObject <NSCopying, BSDescriptionProviding>

@property (retain, nonatomic) SBFolder *folder;
@property (nonatomic) long long orientation;
@property (nonatomic) unsigned long long allowedOrientations;
@property (retain, nonatomic) id<SBIconListLayoutProvider> listLayoutProvider;
@property (weak, nonatomic) id<SBIconViewProviding> iconViewProvider;
@property (weak, nonatomic) id<SBNestingViewControllerDelegate> delegate;
@property (weak, nonatomic) id<SBFolderControllerDelegate> folderDelegate;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (retain, nonatomic) SBFolderIconImageCache *folderIconImageCache;
@property (retain, nonatomic) SBHIconImageCache *iconImageCache;
@property (retain, nonatomic) SBIconPageIndicatorImageSetCache *iconPageIndicatorImageSetCache;
@property (retain, nonatomic) SBFolderControllerAnimationContext *animationContext;
@property (retain, nonatomic) UIView *headerView;
@property (nonatomic) double headerHeight;
@property (copy, nonatomic) NSString *originatingIconLocation;
@property (nonatomic) unsigned long long userInterfaceLayoutDirectionHandling;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } initialViewFrame;
@property (nonatomic) BOOL snapsToPageBoundariesAfterScrolling;
@property (nonatomic) BOOL addsFocusGuidesForWrapping;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)succinctDescription;
- (id)init;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;

@end
