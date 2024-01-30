@class NSString;

@interface APPCPromotedContentView : UIView <NewsTransparencyViewControllerDelegate, SFSafariViewControllerDelegate> {
    void /* unknown type, empty encoding */ privacyMarkerView;
    void /* unknown type, empty encoding */ dimmerView;
    void /* unknown type, empty encoding */ customPrivacyHandling;
    void /* unknown type, empty encoding */ tapGestureRecognizer;
    void /* unknown type, empty encoding */ expandedAdTapGestureRecognizer;
    void /* unknown type, empty encoding */ expandedAdFrame;
    void /* unknown type, empty encoding */ visiblePercentage;
    void /* unknown type, empty encoding */ promotedContent;
    void /* unknown type, empty encoding */ lastPerformedAction;
    void /* unknown type, empty encoding */ shouldBlockNavigation;
    void /* unknown type, empty encoding */ tapWasRecognized;
    void /* unknown type, empty encoding */ interactionDelegate;
    void /* unknown type, empty encoding */ interactionPresentationDelegate;
    void /* unknown type, empty encoding */ videoTapAction;
    void /* unknown type, empty encoding */ videoActionTimestamp;
    void /* unknown type, empty encoding */ videoMoreLocation;
    void /* unknown type, empty encoding */ shouldCollapseOnRotation;
    void /* unknown type, empty encoding */ placement;
    void /* unknown type, empty encoding */ overriddenPrivacyMarkerPosition;
}

@property (nonatomic) void /* unknown type, empty encoding */ readiness;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (nonatomic, readonly) NSString *description;

- (void)tappedPrivacyMarker:(id)a0;
- (void)sizeCategoryChanged:(id)a0;
- (void)safariViewControllerDidFinish:(id)a0;
- (void)tapRecognized:(id)a0;
- (void)newsTransparencyViewControllerDidDismiss:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
