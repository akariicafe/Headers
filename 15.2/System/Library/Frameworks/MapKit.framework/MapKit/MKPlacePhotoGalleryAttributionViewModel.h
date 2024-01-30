@class NSString;

@interface MKPlacePhotoGalleryAttributionViewModel : NSObject

@property (retain, nonatomic) NSString *titleText;
@property (retain, nonatomic) NSString *subtitleText;
@property (nonatomic) long long accessoryStyle;

+ (id)viewModelFromMapItem:(id)a0 photo:(id)a1;

- (void).cxx_destruct;

@end
