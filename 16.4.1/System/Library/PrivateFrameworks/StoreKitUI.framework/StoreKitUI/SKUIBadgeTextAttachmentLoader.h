@class NSString, NSMapTable, SKUIResourceLoader, NSHashTable;

@interface SKUIBadgeTextAttachmentLoader : NSObject <SKUIArtworkRequestDelegate> {
    NSMapTable *_imageRequests;
    SKUIResourceLoader *_resourceLoader;
    NSHashTable *_stringViews;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)artworkRequest:(id)a0 didLoadImage:(id)a1;
- (void)connectStringView:(id)a0;
- (void)disconnectStringView:(id)a0;
- (id)initWithResourceLoader:(id)a0;
- (BOOL)loadImageForBadge:(id)a0 layout:(id)a1 reason:(long long)a2;

@end
