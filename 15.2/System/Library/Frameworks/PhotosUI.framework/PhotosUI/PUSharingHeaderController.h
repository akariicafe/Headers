@class LPImage, LPLinkMetadata;
@protocol PXDisplayAsset, PUSharingHeaderDataProvider;

@interface PUSharingHeaderController : NSObject {
    LPImage *_icloudLinkImage;
    LPImage *_placeholderImage;
    id<PXDisplayAsset> _sharingHeaderFrontAsset;
    id<PXDisplayAsset> _sharingHeaderBackAsset;
}

@property (retain, nonatomic) LPLinkMetadata *linkMetadata;
@property (readonly, weak, nonatomic) id<PUSharingHeaderDataProvider> dataProvider;

+ (id)new;

- (void)updateIfNeeded;
- (id)initWithDataProvider:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)_sharingHeaderStatus;
- (id)_linkPresentationImageForAsset:(id)a0;
- (id)_linkPresentationImageForPerson:(id)a0;

@end
