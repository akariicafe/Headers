@class NSString, _MKMapItemPhotosAttribution, NSURL;
@protocol GEOMapItemPhoto;

@interface MKMapItemPhoto : NSObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) long long photoStyle;
@property (readonly, nonatomic) _MKMapItemPhotosAttribution *attribution;
@property (readonly, nonatomic) NSString *license;
@property (readonly, nonatomic) NSURL *largestPhotoURL;
@property (readonly, nonatomic) NSString *photoID;
@property (readonly, nonatomic) BOOL useGallery;
@property (readonly, nonatomic) long long format;
@property (readonly, nonatomic) BOOL displayFullScreenPhotoGallery;
@property (readonly, nonatomic) id<GEOMapItemPhoto> geoMapItemPhoto;
@property (readonly, nonatomic) BOOL needsObfuscationWhenRenderedInFullScreen;

- (void).cxx_destruct;
- (id)initWithPictureItem:(id)a0;
- (id)initWithGeoMapItemPhoto:(id)a0;
- (id)initWithGeoMapItemPhoto:(id)a0 fallbackTitle:(id)a1;
- (id)initWithGeoMapItemPhoto:(id)a0 title:(id)a1 subtitle:(id)a2;
- (id)urlForBestPhotoForSize:(struct CGSize { double x0; double x1; })a0;

@end
