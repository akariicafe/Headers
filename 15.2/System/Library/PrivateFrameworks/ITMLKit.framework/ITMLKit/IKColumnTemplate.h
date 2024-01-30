@class IKColumnCollectionElement, IKDocumentBannerElement;

@interface IKColumnTemplate : IKViewElement

@property (readonly, retain, nonatomic) IKDocumentBannerElement *documentBanner;
@property (readonly, retain, nonatomic) IKColumnCollectionElement *columnCollection;

@end
