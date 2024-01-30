@class GEOPDPhoto, NSString, GEOPDCaptionedPhoto, NSURL, NSDate, GEOMapItemPhotosAttribution;
@protocol GEOPhotoInfoSource;

@interface _GEOPlaceDataPhoto : NSObject <GEOMapItemPhoto> {
    GEOPDPhoto *_photo;
    GEOPDCaptionedPhoto *_captionedPhoto;
    id<GEOPhotoInfoSource> _photoInfoSource;
    GEOMapItemPhotosAttribution *_attribution;
}

@property (readonly, nonatomic) NSString *author;
@property (readonly, nonatomic) NSString *caption;
@property (readonly, nonatomic) NSString *licenseDescription;
@property (readonly, nonatomic) NSURL *licenseURL;
@property (readonly, nonatomic) BOOL displayFullScreenPhotoGallery;
@property (readonly, nonatomic) BOOL useGallery;
@property (readonly, nonatomic) NSString *uid;
@property (readonly, nonatomic) double sizeRatio;
@property (readonly, nonatomic) BOOL highQuality;
@property (readonly, nonatomic) BOOL businessProvided;
@property (readonly, nonatomic) NSString *backgroundJoeColor;
@property (readonly, nonatomic) BOOL isBackgroundJoeColorCurated;
@property (readonly, nonatomic) GEOMapItemPhotosAttribution *attribution;
@property (readonly, nonatomic) NSDate *dateCreated;
@property (readonly, nonatomic) BOOL needsObfuscationWhenRenderedInFullScreen;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)bestPhotoForFrameSize:(struct CGSize { double x0; double x1; })a0 displayScale:(double)a1 options:(id)a2;
- (id)bestPhotoForSize:(struct CGSize { double x0; double x1; })a0 allowSmaller:(BOOL)a1;
- (id)bestPhotoForSize:(struct CGSize { double x0; double x1; })a0 options:(id)a1;
- (id)initWithCaptionedPhoto:(id)a0;
- (id)initWithCaptionedPhoto:(id)a0 attribution:(id)a1;
- (id)initWithPhoto:(id)a0;
- (id)initWithPhoto:(id)a0 attribution:(id)a1;
- (id)largestPhoto;

@end
