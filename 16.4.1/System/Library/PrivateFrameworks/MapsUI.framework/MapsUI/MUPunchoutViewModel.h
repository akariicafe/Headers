@class NSString, UIMenu;

@interface MUPunchoutViewModel : NSObject

@property (retain, nonatomic) NSString *symbolName;
@property (retain, nonatomic) NSString *punchoutText;
@property (retain, nonatomic) UIMenu *menu;

+ (id)viewModelForAddPhotos;
+ (id)viewModelForFullScreenGallery;
+ (id)viewModelForVendorName:(id)a0;

- (void).cxx_destruct;

@end
