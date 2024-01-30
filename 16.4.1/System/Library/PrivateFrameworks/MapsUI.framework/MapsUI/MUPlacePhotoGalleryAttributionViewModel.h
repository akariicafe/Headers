@class NSString, NSDate;

@interface MUPlacePhotoGalleryAttributionViewModel : NSObject

@property (retain, nonatomic) NSString *titleText;
@property (retain, nonatomic) NSString *subtitleText;
@property (nonatomic) long long accessoryStyle;
@property (retain, nonatomic) NSString *authorName;
@property (retain, nonatomic) NSString *placeName;
@property (retain, nonatomic) NSDate *photoDate;
@property (nonatomic) long long attributionType;
@property (retain, nonatomic) NSString *caption;
@property (retain, nonatomic) NSString *vendorName;
@property (nonatomic) BOOL supportsPunchOut;

+ (id)viewModelForCustomTitle:(id)a0 customSubtitle:(id)a1;
+ (id)viewModelFromMapItem:(id)a0 photo:(id)a1 photoCreditName:(id)a2 shouldAddPhotoCredit:(BOOL)a3;

- (void).cxx_destruct;

@end
