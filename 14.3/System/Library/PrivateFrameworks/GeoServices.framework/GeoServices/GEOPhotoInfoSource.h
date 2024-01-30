@class NSArray, NSString, GEODefaultPhotoInfoProvider, GEOAMPPhotoInfoProvider;
@protocol GEOPhotoInfoProvider;

@interface GEOPhotoInfoSource : NSObject <GEOPhotoInfoSource> {
    NSArray *_originalPhotoContent;
    GEOAMPPhotoInfoProvider *_ampPhotoInfoProvider;
    GEODefaultPhotoInfoProvider *_defaultPhotoInfoProvider;
}

@property (readonly, nonatomic) id<GEOPhotoInfoProvider> principalPhotoInfoProvider;
@property (readonly, nonatomic) NSArray *allPhotoInfoProviders;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (double)sizeRatio;
- (id)largestPhoto;
- (id)initWithPhotoContent:(id)a0;
- (id)bestPhotoForSize:(struct CGSize { double x0; double x1; })a0 options:(id)a1;

@end
