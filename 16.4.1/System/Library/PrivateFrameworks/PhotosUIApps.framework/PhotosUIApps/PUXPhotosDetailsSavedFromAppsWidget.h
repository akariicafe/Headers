@class NSString;

@interface PUXPhotosDetailsSavedFromAppsWidget : PhotosUIApps.PhotosDetailsWidget

@property (nonatomic, readonly) NSString *snappableWidgetIdentifier;
@property (nonatomic, readonly) long long contentLayoutStyle;

- (id)init;

@end
