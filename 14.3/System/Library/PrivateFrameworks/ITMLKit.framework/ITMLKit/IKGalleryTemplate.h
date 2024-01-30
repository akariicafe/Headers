@class IKDocumentBannerElement, IKGridElement, IKBackgroundElement;

@interface IKGalleryTemplate : IKViewElement

@property (readonly, retain, nonatomic) IKBackgroundElement *background;
@property (readonly, retain, nonatomic) IKDocumentBannerElement *documentBanner;
@property (readonly, retain, nonatomic) IKGridElement *grid;

@end
