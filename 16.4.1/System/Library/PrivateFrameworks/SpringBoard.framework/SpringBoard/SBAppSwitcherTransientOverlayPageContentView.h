@class NSString, SBAppLayout, UIView, SBOrientationTransformWrapperView;
@protocol SBAppSwitcherTransientOverlayPageContentViewDelegate;

@interface SBAppSwitcherTransientOverlayPageContentView : UIView <SBAppSwitcherPageContentView> {
    SBOrientationTransformWrapperView *_contentWrapperView;
    long long _orientation;
}

@property (readonly, copy, nonatomic) SBAppLayout *appLayout;
@property (nonatomic, getter=isActive) BOOL active;
@property (nonatomic, getter=isVisible) BOOL visible;
@property (nonatomic) long long contentOrientation;
@property (retain, nonatomic) UIView *contentView;
@property (weak, nonatomic) id<SBAppSwitcherTransientOverlayPageContentViewDelegate> delegate;
@property (nonatomic) double cornerRadius;
@property (nonatomic) unsigned long long maskedCorners;
@property (nonatomic) long long orientation;
@property (readonly, nonatomic) BOOL contentRequiresGroupOpacity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
