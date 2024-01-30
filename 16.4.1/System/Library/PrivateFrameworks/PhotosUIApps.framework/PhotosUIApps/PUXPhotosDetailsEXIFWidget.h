@class NSString;

@interface PUXPhotosDetailsEXIFWidget : PhotosUIApps.PhotosDetailsWidget

@property (nonatomic, readonly) NSString *snappableWidgetIdentifier;
@property (nonatomic, readonly) BOOL hasLoadedContentData;

- (id)init;
- (void)loadContentData;

@end
