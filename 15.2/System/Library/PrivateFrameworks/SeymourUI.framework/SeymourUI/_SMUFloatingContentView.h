@class UIImage, NSString, UIView;
@protocol SMUFocusAnimationConfiguration;

@interface _SMUFloatingContentView : _UIFloatingContentView <SMUFloatingContentView>

@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;
@property (readonly, nonatomic) UIView *contentView;
@property (readonly, nonatomic) UIView *visualEffectContainerView;
@property (nonatomic) double cornerRadius;
@property (nonatomic, getter=isContinuousCornerEnabled) BOOL continuousCornerEnabled;
@property (nonatomic) double scaleFactor;
@property (nonatomic) double focusedSizeIncrease;
@property (nonatomic) struct CGPoint { double x0; double x1; } focusScaleAnchorPoint;
@property (nonatomic) double visualEffectContainerViewScaleFactor;
@property (copy, nonatomic) id<SMUFocusAnimationConfiguration> focusAnimationConfiguration;
@property (nonatomic) BOOL useShadowImage;
@property (nonatomic, getter=isShadowEnabled) BOOL shadowEnabled;
@property (nonatomic) struct CGSize { double x0; double x1; } shadowSize;
@property (nonatomic) double shadowRadius;
@property (nonatomic) double shadowOpacity;
@property (nonatomic) double shadowVerticalOffset;
@property (nonatomic) double unfocusedShadowRadius;
@property (nonatomic) double unfocusedShadowOpacity;
@property (nonatomic) double unfocusedShadowVerticalOffset;
@property (nonatomic) struct CGSize { double x0; double x1; } unfocusedShadowExpansion;
@property (nonatomic) struct CGSize { double x0; double x1; } shadowExpansion;
@property (retain, nonatomic) UIImage *shadowImage;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } shadowContentsCenter;
@property (nonatomic) unsigned long long controlState;
@property (nonatomic) BOOL clipsContentToBounds;
@property (nonatomic) long long highlightStyle;
@property (nonatomic, getter=isContentOpaque) BOOL contentOpaque;
@property (nonatomic) BOOL scalesBackwards;
@property (nonatomic) BOOL roundContentWhenDeselected;
@property (nonatomic) struct CGSize { double x0; double x1; } asymmetricScaleFactor;
@property (nonatomic) struct CGSize { double x0; double x1; } asymmetricFocusedSizeIncrease;
@property (nonatomic) BOOL _disableOutsetShadowPath;
@property (nonatomic) BOOL showsHighContrastFocusIndicator;
@property (nonatomic) NSString *cornerCurve;


@end
