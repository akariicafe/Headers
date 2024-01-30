@class NSString, UIButton;
@protocol CKFocusFilterBannerDelegate;

@interface CKFocusFilterBannerCollapsedCollectionViewCell : UICollectionViewCell <UIPointerInteractionDelegate>

@property (class, readonly, nonatomic) NSString *reuseIdentifier;

@property (retain, nonatomic) UIButton *focusFilterToggleButton;
@property (weak, nonatomic) id<CKFocusFilterBannerDelegate> focusFilterBannerDelegate;
@property (nonatomic) BOOL isFocusFilterEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
