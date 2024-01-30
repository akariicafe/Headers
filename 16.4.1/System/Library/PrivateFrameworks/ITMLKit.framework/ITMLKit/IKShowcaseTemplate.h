@class NSArray, IKDocumentBannerElement, IKBackgroundElement, IKCarouselElement;

@interface IKShowcaseTemplate : IKViewElement

@property (readonly, retain, nonatomic) NSArray *modes;
@property (readonly, retain, nonatomic) IKDocumentBannerElement *documentBanner;
@property (readonly, retain, nonatomic) IKCarouselElement *carousel;
@property (readonly, retain, nonatomic) IKBackgroundElement *background;
@property (readonly, nonatomic) unsigned long long transition;

@end
