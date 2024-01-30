@class UIImage, UIColor, UIBlurEffect;

@interface CKConversationListAccessoryViewConfiguration : NSObject <NSCopying>

@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIColor *tintColor;
@property (retain, nonatomic) UIBlurEffect *blurEffect;
@property (nonatomic) long long vibrancyStyle;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
