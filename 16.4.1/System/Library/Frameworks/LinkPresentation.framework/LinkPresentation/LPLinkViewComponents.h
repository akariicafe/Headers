@class LPCollaborationHandleView, LPContactsBadgeView, UIView, LPQuoteView, LPComponentView, LPImageView, LPDomainNameIndicator, LPCaptionBarView;

@interface LPLinkViewComponents : NSObject

@property (retain, nonatomic) LPCaptionBarView *captionBar;
@property (retain, nonatomic) LPComponentView *media;
@property (retain, nonatomic) UIView *mediaBackground;
@property (retain, nonatomic) LPCaptionBarView *mediaTopCaptionBar;
@property (retain, nonatomic) LPCaptionBarView *mediaBottomCaptionBar;
@property (retain, nonatomic) LPQuoteView *quote;
@property (retain, nonatomic) LPImageView *backgroundImage;
@property (retain, nonatomic) LPContactsBadgeView *contactsBadge;
@property (retain, nonatomic) LPCollaborationHandleView *collaborationHandle;
@property (retain, nonatomic) LPDomainNameIndicator *domainNameIndicator;

- (void).cxx_destruct;
- (void)applyToAllViews:(id /* block */)a0;

@end
