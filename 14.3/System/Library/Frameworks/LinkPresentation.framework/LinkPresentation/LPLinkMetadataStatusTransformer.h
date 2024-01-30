@class NSURL, LPLinkMetadata, NSAttributedString;
@protocol LPLinkMetadataStatusTransformerDelegate;

@interface LPLinkMetadataStatusTransformer : NSObject {
    NSURL *_URL;
}

@property (retain, nonatomic) LPLinkMetadata *metadata;
@property (weak, nonatomic) id<LPLinkMetadataStatusTransformerDelegate> delegate;
@property (readonly, nonatomic) BOOL wantsStatusItem;
@property (readonly, copy, nonatomic) NSAttributedString *statusText;
@property (readonly, copy, nonatomic) NSURL *actionURL;
@property (readonly, copy, nonatomic) NSURL *canonicalURL;

- (id)originalURL;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithMetadata:(id)a0 URL:(id)a1;

@end
