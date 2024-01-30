@class UIImage, NSString;

@interface CNSharingProfileOnboardingPhotoSelectionResult : NSObject

@property (retain, nonatomic) UIImage *originalImage;
@property (retain, nonatomic) UIImage *compositedImage;
@property (copy, nonatomic) NSString *variantName;
@property (nonatomic) long long avatarType;
@property (nonatomic) BOOL wasSelectedInFullPhotoPicker;

- (void).cxx_destruct;

@end
