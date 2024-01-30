@class NSString, PLCloudSharedAlbum;

@interface PLAlbumStreamingActivityItemSource : NSObject <UIActivityItemsSource, UIActivityItemSocialSource, UIActivityItemSubjectSource> {
    PLCloudSharedAlbum *_album;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)activityViewController:(id)a0 thumbnailForActivityType:(id)a1;
- (id)activityViewController:(id)a0 itemsForActivityType:(id)a1;
- (id)activityViewControllerPlaceholderItems:(id)a0;
- (id)activityViewControllerSubject:(id)a0;
- (id)initWithAlbum:(id)a0;

@end
