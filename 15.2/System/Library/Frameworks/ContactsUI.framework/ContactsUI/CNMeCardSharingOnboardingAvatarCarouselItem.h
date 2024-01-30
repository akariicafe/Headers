@class UIImage, NSString;

@interface CNMeCardSharingOnboardingAvatarCarouselItem : NSObject

@property (retain, nonatomic) UIImage *cachedImage;
@property (readonly, copy, nonatomic) id /* block */ imageProvider;
@property (nonatomic) unsigned long long imageType;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, nonatomic) double imageInsetPercentage;
@property (nonatomic) BOOL shouldShowVariants;

- (id)initWithTitle:(id)a0;
- (void).cxx_destruct;
- (id)initWithImageInsetPercentage:(double)a0 imageProvider:(id /* block */)a1;

@end
