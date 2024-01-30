@interface DOCThumbnailRequest : NSObject

@property (copy, nonatomic) id /* block */ thumbnailGenerationRequiresDownloadHandler;

+ (id)iconRequestForURL:(id)a0 descriptor:(id)a1 thumbnailGenerator:(id)a2;
+ (id)iconRequestForItem:(id)a0 descriptor:(id)a1 thumbnailGenerator:(id)a2;
+ (id)requestForItem:(id)a0 descriptor:(id)a1 thumbnailGenerator:(id)a2;

- (void)cancel;
- (void).cxx_destruct;
- (void)generateThumbnailWithCompletionHandler:(id /* block */)a0;

@end
