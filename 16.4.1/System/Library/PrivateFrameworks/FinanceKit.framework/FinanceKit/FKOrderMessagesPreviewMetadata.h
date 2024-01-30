@class FKOrderMessagesPreviewMetadataImage, FKOrderMessagesPreviewMetadataText;

@interface FKOrderMessagesPreviewMetadata : NSObject

@property (readonly, nonatomic) FKOrderMessagesPreviewMetadataImage *headerImage;
@property (readonly, nonatomic) struct CGColor { } *backgroundColor;
@property (readonly, nonatomic) FKOrderMessagesPreviewMetadataText *primaryText;
@property (readonly, nonatomic) FKOrderMessagesPreviewMetadataText *secondaryText;
@property (readonly, nonatomic) FKOrderMessagesPreviewMetadataText *tertiaryText;

+ (id)walletDeepLinkForExistingOrderAtURL:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithOrderData:(id)a0 workingDirectory:(id)a1 error:(id *)a2;

@end
