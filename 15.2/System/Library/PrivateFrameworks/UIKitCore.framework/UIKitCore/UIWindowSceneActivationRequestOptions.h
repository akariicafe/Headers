@class NSString, UISceneConfiguration;

@interface UIWindowSceneActivationRequestOptions : UISceneActivationRequestOptions <NSCopying>

@property (copy, nonatomic, setter=_setInteractionIdentifier:) NSString *_interactionIdentifier;
@property (nonatomic, setter=_setPreferredSizeCategory:) unsigned long long _preferredSizeCategory;
@property (nonatomic, setter=_setPreserveLayout:) BOOL _preserveLayout;
@property (retain, nonatomic, setter=_setQuickLookSceneConfiguration:) UISceneConfiguration *_quickLookSceneConfiguration;
@property (nonatomic) unsigned long long preferredPresentationStyle;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_descriptionProperties;

@end
