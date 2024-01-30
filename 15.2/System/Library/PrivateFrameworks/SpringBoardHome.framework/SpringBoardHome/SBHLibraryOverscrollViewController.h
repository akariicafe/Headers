@class NSString, _UILegibilitySettings;
@protocol SBIconListViewQuerying, SBIconViewQuerying, SBIconLocationPresenting;

@interface SBHLibraryOverscrollViewController : UIViewController <SBHRootFolderCustomViewPresenting>

@property (readonly, nonatomic) BOOL shouldBeIndicatedInPageControl;
@property (readonly) id<SBIconViewQuerying> iconViewQueryable;
@property (readonly) id<SBIconLocationPresenting> iconLocationPresenter;
@property (readonly) id<SBIconListViewQuerying> iconListViewQueryable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (nonatomic) unsigned long long contentVisibility;

- (void).cxx_destruct;

@end
