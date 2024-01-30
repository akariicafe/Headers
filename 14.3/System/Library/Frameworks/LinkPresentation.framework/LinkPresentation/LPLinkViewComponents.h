@class LPTextView, LPDomainNameIndicator, UIView, LPComponentView, LPCaptionBarView;

@interface LPLinkViewComponents : NSObject

@property (retain, nonatomic) LPCaptionBarView *captionBar;
@property (retain, nonatomic) LPComponentView *media;
@property (retain, nonatomic) UIView *mediaBackground;
@property (retain, nonatomic) LPCaptionBarView *mediaTopCaptionBar;
@property (retain, nonatomic) LPCaptionBarView *mediaBottomCaptionBar;
@property (retain, nonatomic) LPTextView *quote;
@property (retain, nonatomic) LPDomainNameIndicator *domainNameIndicator;

- (void).cxx_destruct;

@end
