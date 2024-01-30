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

- (id)initWithDataProvider:(id)a0;
- (void)updateIfNeeded;
- (id)init;
- (void).cxx_destruct;
- (id)_linkPresentationImageForPerson:(id)a0;
- (id)_sharingHeaderStatus;
- (id)createTextAttachmentForGlyphImageWithName:(id)a0;

@end
