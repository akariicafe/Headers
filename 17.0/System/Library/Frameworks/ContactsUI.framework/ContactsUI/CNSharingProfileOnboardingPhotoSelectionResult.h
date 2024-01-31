@class UIImage, NSString, NSData;

@interface CNSharingProfileOnboardingPhotoSelectionResult : NSObject

@property (retain, nonatomic) UIImage *originalImage;
@property (retain, nonatomic) UIImage *compositedImage;
@property (copy, nonatomic) NSString *variantName;
@property (nonatomic) long long avatarType;
@property (nonatomic) BOOL wasSelectedInFullPhotoPicker;
@property (nonatomic) NSData *memojiMetadata;

- (void).cxx_destruct;

@end
