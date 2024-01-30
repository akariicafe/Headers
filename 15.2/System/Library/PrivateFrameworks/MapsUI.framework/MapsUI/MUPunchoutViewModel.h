@class NSString;

@interface MUPunchoutViewModel : NSObject

@property (retain, nonatomic) NSString *symbolName;
@property (retain, nonatomic) NSString *punchoutText;

+ (id)viewModelForVendorName:(id)a0;
+ (id)viewModelForAddPhotos;
+ (id)viewModelForFullScreenGallery;

- (void).cxx_destruct;

@end
