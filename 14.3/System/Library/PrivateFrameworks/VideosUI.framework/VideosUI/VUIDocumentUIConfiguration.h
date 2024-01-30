@class NSString;

@interface VUIDocumentUIConfiguration : NSObject

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *viewControllerIdentifier;
@property (copy, nonatomic) NSString *viewControllerDocumentIdentifier;
@property (nonatomic) BOOL supportsInAppBanner;
@property (nonatomic, getter=isAnimated) BOOL animated;
@property (nonatomic, getter=isNavigationBarHidden) BOOL navigationBarHidden;
@property (nonatomic, getter=isNavigationBarAdjustedToSizeClass) BOOL navigationBarAdjustedToSizeClass;
@property (nonatomic, getter=isInteractivePopGestureAllowed) BOOL isInteractivePopGestureAllowed;

+ (id)uiConfigurationWithDict:(id)a0;
+ (long long)_presentationTypeFromString:(id)a0;
+ (struct CGSize { double x0; double x1; })_preferredSizeFromConfig:(id)a0;

- (void).cxx_destruct;

@end
