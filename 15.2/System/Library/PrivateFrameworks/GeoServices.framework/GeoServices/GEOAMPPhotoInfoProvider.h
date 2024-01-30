@class NSString, GEOPDPhotoContent, AMSMediaArtwork;

@interface GEOAMPPhotoInfoProvider : NSObject <GEOPhotoInfoProvider> {
    AMSMediaArtwork *_artwork;
    GEOPDPhotoContent *_templatePhotoContent;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)largestPhoto;
- (id)initWithPhotoContent:(id)a0;
- (void).cxx_destruct;
- (id)bestPhotoForSize:(struct CGSize { double x0; double x1; })a0 options:(id)a1;
- (double)sizeRatio;
- (int)designatedURLType;

@end
