@class UIView, NSString, UIImage, NSArray, CIContext, UIImageView, _UIImageLoader, UILayoutGuide, UIImageSymbolConfiguration, NSMapTable;
@protocol _UIImageViewLoadingDelegate;

@interface _UIImageViewExtendedStorage : NSObject <CAAnimationDelegate> {
    UIImageView *_imageView;
    UIImage *_image;
    UIImage *_highlightedImage;
    UIImage *_configuredImage;
    UIImage *_configuredHighlightedImage;
    UIImageSymbolConfiguration *_preferredSymbolConfiguration;
    UIImageSymbolConfiguration *_overridingSymbolConfiguration;
    NSArray *_animationImages;
    NSArray *_highlightedAnimationImages;
    double _animationDuration;
    long long _animationRepeatCount;
    long long _defaultRenderingMode;
    unsigned long long _templateImageRenderingEffects;
    UIImage *_displayedImage;
    UIImage *_displayedHighlightedImage;
    CIContext *_CIContext;
    UILayoutGuide *_imageContentGuide;
    NSMapTable *_layouts;
    unsigned int _drawMode;
    _UIImageLoader *_imageLoader;
    id<_UIImageViewLoadingDelegate> _loadingDelegate;
    UIImage *_imageBeingSetByLoader;
    UIView *_placeholderView;
    struct { unsigned char highlighted : 1; unsigned char masksTemplateImages : 1; unsigned char adjustsImageSizeForAccessibilityContentSizeCategory : 1; unsigned char startingLoad : 1; unsigned char enqueueingLoad : 1; unsigned char stoppingLoad : 1; } _flags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (id)initForImageView:(id)a0;
- (void).cxx_destruct;

@end
