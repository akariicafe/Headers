@class NSString;

@interface PhotosUIApps.PhotosDetailsLocationSearchResult : NSObject <PXPhotosDetailsLocationSearchResult> {
    void /* unknown type, empty encoding */ id;
    void /* unknown type, empty encoding */ title;
    void /* unknown type, empty encoding */ subtitle;
    void /* unknown type, empty encoding */ image;
    void /* unknown type, empty encoding */ imageColor;
    void /* unknown type, empty encoding */ suggestion;
}

@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *subtitle;

- (id)init;
- (void).cxx_destruct;

@end
