@class UIColor, UIFont, UIImage, GEOPlaceCollection, NSAttributedString, NSObject;
@protocol MKCuratedCollectionsSyncCoordinator, OS_dispatch_queue;

@interface MKPlaceCollectionViewModel : NSObject {
    long long _context;
    UIFont *_titleFont;
    double _screenScale;
    UIImage *_collectionImage;
    NSObject<OS_dispatch_queue> *_imageLoadingQueue;
    NSObject<OS_dispatch_queue> *_publisherLogoImageQueue;
}

@property (retain, nonatomic) id<MKCuratedCollectionsSyncCoordinator> syncCoordinator;
@property (nonatomic) struct CGSize { double width; double height; } photoSize;
@property (retain) UIImage *publisherLogoImage;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) NSAttributedString *collectionTitle;
@property (retain, nonatomic) NSAttributedString *collectionLongTitle;
@property (retain, nonatomic) NSAttributedString *secondaryCollectionTitle;
@property (nonatomic) BOOL isSaved;
@property (readonly, nonatomic) GEOPlaceCollection *placeCollection;

- (BOOL)shouldDisplayMetadata;
- (id)description;
- (id)initWithGEOPlaceCollection:(id)a0 usingSyncCoordinator:(id)a1 inContext:(long long)a2 usingTitleFont:(id)a3;
- (void)publisherIconImageWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)_publisherImageWithIdentifier:(unsigned int)a0 completion:(id /* block */)a1;
- (void)collectionImageForSize:(struct CGSize { double x0; double x1; })a0 onCompletion:(id /* block */)a1;
- (void)publisherLogoImageWithCompletion:(id /* block */)a0;

@end
