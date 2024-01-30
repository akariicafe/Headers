@class NSString;

@interface PUXPhotosDetailsSharedWithYouWidget : PhotosUIApps.PhotosDetailsWidget

@property (nonatomic, readonly) NSString *snappableWidgetIdentifier;
@property (nonatomic, readonly) long long contentLayoutStyle;

- (id)init;

@end
