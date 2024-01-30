@class NSString, NSArray, GEOPDCategorizedPhotos, NSMapTable;

@interface GEOCaptionedPhotoAlbum : NSObject {
    GEOPDCategorizedPhotos *_categorizedPhotos;
    NSMapTable *_attributionMap;
}

@property (readonly, nonatomic) NSString *categoryName;
@property (readonly, nonatomic) NSString *categoryId;
@property (readonly, nonatomic) NSArray *photoList;
@property (readonly, nonatomic) unsigned long long totalNumberOfPhotosAvailable;

- (void)_buildPhotoList;
- (id)initWithCaptionedPhotoCategory:(id)a0 attributionMap:(id)a1;
- (id)description;
- (void).cxx_destruct;

@end
