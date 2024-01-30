@class _UIBannerContent;

@interface UIBannerAction : BSAction

@property (readonly, nonatomic) _UIBannerContent *bannerContent;
@property (readonly, nonatomic) BOOL tappable;

- (id)keyDescriptionForSetting:(unsigned long long)a0;
- (long long)UIActionType;
- (id)_initWithBannerContent:(id)a0 responseHandler:(id /* block */)a1;
- (BOOL)bannerTapped;
- (id)initWithBannerContent:(id)a0;
- (id)initWithBannerContent:(id)a0 responseHandler:(id /* block */)a1;

@end
