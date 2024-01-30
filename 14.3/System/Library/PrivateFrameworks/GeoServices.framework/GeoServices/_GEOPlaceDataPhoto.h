@class GEOPDCaptionedPhoto, NSString, NSURL, GEOPDPhoto;
@protocol GEOPhotoInfoSource;

@interface _GEOPlaceDataPhoto : NSObject <GEOMapItemPhoto> {
    GEOPDPhoto *_photo;
    GEOPDCaptionedPhoto *_captionedPhoto;
    id<GEOPhotoInfoSource> _photoInfoSource;
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
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)bestPhotoForSize:(struct CGSize { double x0; double x1; })a0 allowSmaller:(BOOL)a1;
- (void).cxx_destruct;
- (id)initWithCaptionedPhoto:(id)a0;
- (id)initWithPhoto:(id)a0;
- (id)largestPhoto;
- (id)bestPhotoForSize:(struct CGSize { double x0; double x1; })a0 options:(id)a1;
- (id)bestPhotoForFrameSize:(struct CGSize { double x0; double x1; })a0 displayScale:(double)a1 options:(id)a2;

@end
