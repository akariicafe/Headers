@class UIImage;

@interface WBSLeadImageCacheResponse : WBSSiteMetadataResponse

@property (readonly, nonatomic) UIImage *thumbnail;

+ (id)responseWithURL:(id)a0 thumbnail:(id)a1;

- (void).cxx_destruct;
- (id)initWithURL:(id)a0;
- (id)initWithURL:(id)a0 thumbnail:(id)a1;

@end
