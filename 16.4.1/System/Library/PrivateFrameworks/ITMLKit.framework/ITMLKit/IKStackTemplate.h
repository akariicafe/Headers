@class IKDocumentBannerElement, IKCollectionListElement, IKBackgroundElement;

@interface IKStackTemplate : IKViewElement

@property (readonly, retain, nonatomic) IKBackgroundElement *background;
@property (readonly, retain, nonatomic) IKDocumentBannerElement *documentBanner;
@property (readonly, retain, nonatomic) IKCollectionListElement *collectionList;

@end
