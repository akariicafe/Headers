@class CKSyndicationOnboardingTailedBubble, NSString, UIView, NSMutableArray;

@interface CKAppIconLinkView : UIView

@property (nonatomic) long long appName;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } linkFrame;
@property (retain, nonatomic) UIView *previewView;
@property (retain, nonatomic) NSString *previewString;
@property (retain, nonatomic) CKSyndicationOnboardingTailedBubble *tailedBubble;
@property (retain, nonatomic) NSMutableArray *constraints;

- (void)updateConstraints;
- (void).cxx_destruct;
- (id)generateCroppedImageFromPreviewImage:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withAppName:(long long)a1;
- (void)setPreviewImageForImage:(id)a0;
- (void)setUpViewsForApp:(long long)a0;

@end
