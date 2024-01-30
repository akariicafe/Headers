@class _UIBannerContent;

@interface UIBannerAction : BSAction

@property (readonly, nonatomic) _UIBannerContent *bannerContent;
@property (readonly, nonatomic) BOOL tappable;

- (id)initWithBannerContent:(id)a0 responseHandler:(id /* block */)a1;
- (id)keyDescriptionForSetting:(unsigned long long)a0;
- (BOOL)bannerTapped;
- (long long)UIActionType;
- (id)initWithBannerContent:(id)a0;
- (id)_initWithBannerContent:(id)a0 responseHandler:(id /* block */)a1;

@end
