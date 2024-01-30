@class UIColor, NSString, NSMutableDictionary, UIImage, PGPlaybackStatePrerollAttributes;

@interface PGControlsViewModelValues : NSObject <NSCopying>

@property (readonly, nonatomic) NSMutableDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) BOOL includesContentLoadingIndicator;
@property (readonly, nonatomic) BOOL includesWaitingToPlayIndicator;
@property (readonly, nonatomic) BOOL includesRestoreButton;
@property (readonly, nonatomic) BOOL includesCancelButton;
@property (readonly, nonatomic) BOOL includesActionButton;
@property (readonly, nonatomic) BOOL includesSkipBackButton;
@property (readonly, nonatomic) BOOL includesSkipForwardButton;
@property (readonly, nonatomic) BOOL includesLiveIndicatorBadge;
@property (readonly, nonatomic) BOOL includesProgressBar;
@property (readonly, nonatomic) BOOL progressBarShouldUpdate;
@property (readonly, nonatomic) BOOL controlsShouldAutoHide;
@property (readonly, nonatomic) BOOL includesSingleTapGestureRecognizer;
@property (readonly, nonatomic) BOOL includesDoubleTapGestureRecognizer;
@property (readonly, nonatomic) BOOL includesDoubleDoubleTapGestureRecognizer;
@property (readonly, copy, nonatomic) NSString *restoreButtonSystemImageName;
@property (readonly, copy, nonatomic) NSString *cancelButtonSystemImageName;
@property (readonly, copy, nonatomic) NSString *actionButtonSystemImageName;
@property (readonly, copy, nonatomic) NSString *skipBackButtonSystemImageName;
@property (readonly, copy, nonatomic) NSString *skipForwardButtonSystemImageName;
@property (readonly, copy, nonatomic) NSString *restoreButtonAccessibilityIdentifier;
@property (readonly, copy, nonatomic) NSString *cancelButtonAccessibilityIdentifier;
@property (readonly, copy, nonatomic) NSString *actionButtonAccessibilityIdentifier;
@property (readonly, copy, nonatomic) NSString *skipBackButtonAccessibilityIdentifier;
@property (readonly, copy, nonatomic) NSString *skipForwardButtonAccessibilityIdentifier;
@property (readonly, copy, nonatomic) NSString *cancelButtonCustomText;
@property (readonly, nonatomic) UIImage *cancelButtonCustomImage;
@property (readonly, nonatomic) UIColor *actionButtonImageTintColor;
@property (readonly, nonatomic) UIColor *actionButtonBackgroundTintColor;
@property (readonly, nonatomic) UIColor *skipBackButtonImageTintColor;
@property (readonly, nonatomic) UIColor *skipBackButtonBackgroundTintColor;
@property (readonly, nonatomic) UIColor *skipForwardButtonImageTintColor;
@property (readonly, nonatomic) UIColor *skipForwardButtonBackgroundTintColor;
@property (readonly, nonatomic) UIColor *cancelButtonImageTintColor;
@property (readonly, nonatomic) UIColor *cancelButtonBackgroundTintColor;
@property (readonly, nonatomic) BOOL actionButtonsWantBackground;
@property (readonly, nonatomic) BOOL isSkipBackButtonEnabled;
@property (readonly, nonatomic) BOOL isActionButtonEnabled;
@property (readonly, nonatomic) BOOL isSkipForwardButtonEnabled;
@property (readonly, nonatomic) PGPlaybackStatePrerollAttributes *prerollAttributes;
@property (readonly, nonatomic) BOOL isPrerollActive;
@property (readonly, nonatomic) UIColor *prerollTintColor;

+ (id)defaultPrerollTintColor;

- (id)initWithDictionaryRepresentation:(id)a0;
- (id)_objectForKey:(id)a0;
- (void)setValue:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_boolForKey:(id)a0;
- (long long)_integerForKey:(id)a0;

@end
