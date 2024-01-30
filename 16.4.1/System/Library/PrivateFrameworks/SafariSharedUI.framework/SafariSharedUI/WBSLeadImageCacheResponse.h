@class UIImage;

@interface WBSLeadImageCacheResponse : WBSSiteMetadataResponse

@property (readonly, nonatomic) UIImage *thumbnail;

+ (id)responseWithURL:(id)a0 thumbnail:(id)a1;

- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0 thumbnail:(id)a1;

@end
