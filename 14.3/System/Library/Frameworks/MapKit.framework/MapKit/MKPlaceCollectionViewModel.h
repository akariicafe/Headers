@class UIColor, UIFont, NSObject, UIImage, GEOPlaceCollection, NSAttributedString, NSRelativeDateTimeFormatter;
@protocol MKCuratedCollectionsSyncCoordinator, OS_dispatch_queue;

@interface MKPlaceCollectionViewModel : NSObject {
    NSRelativeDateTimeFormatter *_collectionDateFormatter;
    long long _context;
    UIFont *_titleFont;
    UIImage *_collectionImage;
    NSObject<OS_dispatch_queue> *_publisherLogoImageQueue;
}

@property (retain, nonatomic) GEOPlaceCollection *placeCollection;
@property (retain, nonatomic) id<MKCuratedCollectionsSyncCoordinator> syncCoordinator;
@property (nonatomic) struct CGSize { double width; double height; } photoSize;
@property (retain) UIImage *publisherLogoImage;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) NSAttributedString *collectionTitle;
@property (retain, nonatomic) NSAttributedString *secondaryCollectionTitle;
@property (nonatomic) BOOL isSaved;
@property (nonatomic) BOOL shouldDisplayMetadata;

- (void).cxx_destruct;
- (id)initWithGEOPlaceCollection:(id)a0 usingSyncCoordinator:(id)a1 inContext:(long long)a2 usingTitleFont:(id)a3 usingFormatter:(id)a4;
- (void)publisherLogoImageWithCompletion:(id /* block */)a0;
- (void)collectionImageForSize:(struct CGSize { double x0; double x1; })a0 onCompletion:(id /* block */)a1;
- (void)cancelCollectionImageDownload;

@end
