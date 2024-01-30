@class NSString, NSArray, MKUGCCallToActionViewAppearance, UIView, UILabel;
@protocol MKUGCCallToActionViewDelegate;

@interface MKUGCCallToActionView : MKPlaceSectionRowView <UGCCallToActionEditAccessoryViewDelegate, MKActivityObserving> {
    UIView *_accessoryButtonContainerView;
    UIView *_currentAccessoryView;
    NSArray *_constraints;
    UILabel *_callToActionLabel;
    double _verticalSpacing;
}

@property (readonly, nonatomic) MKUGCCallToActionViewAppearance *appearance;
@property (weak, nonatomic) id<MKUGCCallToActionViewDelegate> delegate;
@property (nonatomic) long long presentationContext;
@property (readonly, nonatomic) NSString *analyticValue;
@property (readonly, nonatomic) UIView *anchoringView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithAppearance:(id)a0;
- (id)initWithAppearance:(id)a0 verticalSpacing:(double)a1;
- (void)_updateAccessoryView:(BOOL)a0;
- (void)_addPhotosButtonPressed;
- (void)_likeButtonPressed;
- (void)_dislikeButtonPressed;
- (void)callToActionEditAccessoryViewTapped:(id)a0;
- (void)_setupSubviews;
- (void)beginAnimatingActivityIndicator;
- (void)endAnimatingActivityIndicatorWithError:(id)a0;
- (void)_setupConstraints;
- (void)_invalidateLayout;
- (void)_contentSizeChanged;

@end
