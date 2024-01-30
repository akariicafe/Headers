@class IKDocumentBannerElement, IKListElement, IKBackgroundElement;

@interface IKListTemplate : IKViewElement

@property (readonly, retain, nonatomic) IKBackgroundElement *background;
@property (readonly, retain, nonatomic) IKDocumentBannerElement *documentBanner;
@property (readonly, retain, nonatomic) IKListElement *list;

@end
