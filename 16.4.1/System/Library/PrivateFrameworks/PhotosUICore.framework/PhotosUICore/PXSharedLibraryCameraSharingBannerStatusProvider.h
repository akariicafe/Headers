@class NSString;

@interface PXSharedLibraryCameraSharingBannerStatusProvider : PXObservable <PXPreferencesObserver>

@property (nonatomic) BOOL shouldShowBanner;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
