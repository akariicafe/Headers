@class LPLinkMetadata, NSString, NSURL, LPImage;

@interface LPLinkMetadataPreviewTransformer : NSObject

@property (readonly, copy, nonatomic) LPLinkMetadata *metadata;
@property (readonly, copy, nonatomic) NSURL *URL;
@property (readonly, copy, nonatomic) NSString *previewSummary;
@property (readonly, retain, nonatomic) LPImage *previewImage;

- (void).cxx_destruct;
- (id)initWithMetadata:(id)a0 URL:(id)a1;

@end
