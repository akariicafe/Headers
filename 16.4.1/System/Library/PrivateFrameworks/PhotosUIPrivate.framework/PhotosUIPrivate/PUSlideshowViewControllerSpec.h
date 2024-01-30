@class PUSlideshowViewControllerSpecChange;

@interface PUSlideshowViewControllerSpec : PUViewControllerSpec

@property (readonly, nonatomic) PUSlideshowViewControllerSpecChange *currentChange;
@property (nonatomic, setter=_setShouldShowPlaceholder:) BOOL shouldShowPlaceholder;
@property (nonatomic, setter=_setShouldShowChromeBars:) BOOL shouldShowChromeBars;
@property (nonatomic, setter=_setShouldObserveAirplayRoute:) BOOL shouldObserveAirplayRoute;
@property (nonatomic, setter=_setShouldShowAirplayButton:) BOOL shouldShowAirplayButton;
@property (nonatomic, setter=setChromeVisible:) BOOL isChromeVisible;
@property (nonatomic, setter=setAirplayScreenAvailable:) BOOL isAirplayScreenAvailable;
@property (nonatomic, setter=setAirplayRouteAvailable:) BOOL isAirplayRouteAvailable;
@property (readonly, nonatomic) unsigned long long mode;
@property (readonly, nonatomic) BOOL shouldUseChromeBars;
@property (readonly, nonatomic) BOOL shouldUseTapGesture;
@property (readonly, nonatomic) BOOL shouldRegisterToAirplay;
@property (readonly, nonatomic) BOOL shouldPauseWhenAppResignsActive;

- (void)updateIfNeeded;
- (id)newSpecChange;
- (id)initWithMode:(unsigned long long)a0;
- (id)init;

@end
