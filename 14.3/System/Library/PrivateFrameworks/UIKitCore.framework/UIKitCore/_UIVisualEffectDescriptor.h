@class NSMutableArray, UIView;
@protocol _UIVisualEffectViewParticipating;

@interface _UIVisualEffectDescriptor : NSObject

@property (retain, nonatomic) UIView<_UIVisualEffectViewParticipating> *_identityContainerView;
@property (retain, nonatomic) UIView<_UIVisualEffectViewParticipating> *_requestedContainerView;
@property (nonatomic) long long alphaTransition;
@property (copy, nonatomic) NSMutableArray *filterEntries;
@property (copy, nonatomic) NSMutableArray *viewEffects;
@property (retain, nonatomic) UIView<_UIVisualEffectViewParticipating> *containerView;
@property (copy, nonatomic) NSMutableArray *underlays;
@property (copy, nonatomic) NSMutableArray *overlays;
@property (nonatomic) BOOL textShouldRenderWithTintColor;
@property (nonatomic) BOOL allowsVibrancyInContent;
@property (nonatomic) BOOL disableInPlaceFiltering;
@property (nonatomic) BOOL requestAlphaTransition;

+ (id)newTransitionDescriptorForStops:(id)a0;

- (void)addOverlay:(id)a0;
- (void)addFilterEntry:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyForTransitionToDescriptor:(id)a0;
- (id)description;
- (void)addUnderlay:(id)a0;
- (void)addViewEffect:(id)a0;
- (void)uniqueFilterNames;

@end
