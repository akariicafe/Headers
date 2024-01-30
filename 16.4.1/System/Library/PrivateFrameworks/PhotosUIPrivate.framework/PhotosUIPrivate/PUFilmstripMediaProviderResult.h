@class UIImage, NSDictionary, PUFilmstripAsset;

@interface PUFilmstripMediaProviderResult : NSObject

@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) NSDictionary *resultInfo;
@property (nonatomic) long long requestNumber;
@property (nonatomic) struct CGSize { double width; double height; } targetSize;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } actualTime;
@property (retain, nonatomic) PUFilmstripAsset *asset;
@property (nonatomic) BOOL isReadyForDelivery;

- (long long)compare:(id)a0;
- (void).cxx_destruct;

@end
