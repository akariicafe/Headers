@class NSUUID, UISUIActivityConfiguration, NSString, UIImage, NSAttributedString;

@interface SUIHostActivityProxy : UIActivity

@property (retain, nonatomic) UISUIActivityConfiguration *activityConfiguration;
@property (retain, nonatomic) NSUUID *hostActivityUUID;
@property (retain, nonatomic) NSString *activityTitle;
@property (retain, nonatomic) NSString *activityType;
@property (retain, nonatomic) NSString *fallbackActivityType;
@property (nonatomic) struct CGSize { double width; double height; } preferredThumbnailSize;
@property (retain, nonatomic) NSString *positionBeforeActivityType;
@property (nonatomic) BOOL activitySupportsPromiseURLs;
@property (nonatomic) long long defaultSortGroup;
@property (nonatomic) BOOL appIsDocumentTypeOwner;
@property (retain, nonatomic) UIImage *activityImage;
@property (retain, nonatomic) UIImage *actionImage;
@property (retain, nonatomic) NSString *systemImageName;
@property (retain, nonatomic) NSAttributedString *activityFooterText;
@property (readonly, nonatomic) NSUUID *activityUUID;

+ (id)activitiesForConfigurations:(id)a0;
+ (Class)activityProxyClassForActivityCategory:(long long)a0;
+ (id)newWithActivityConfiguration:(id)a0;

- (id)debugDescription;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })_thumbnailSize;
- (id)_systemImageName;
- (void)performActivity;
- (void)activityDidFinish:(BOOL)a0;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (id)_actionImage;
- (void)prepareWithActivityItems:(id)a0;
- (id)_beforeActivity;
- (id)_activityFooterText;
- (BOOL)_activitySupportsPromiseURLs;
- (id)_activityTypeUsingFallbackActivityTypeIfNecessary;
- (BOOL)_appIsDocumentTypeOwner;
- (long long)_defaultSortGroup;
- (id)initWithAttributesFromActivityConfiguration:(id)a0;

@end
