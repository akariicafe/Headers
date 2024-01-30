@class NSString, NSUUID, UIImage, NSAttributedString;

@interface UISUIActivityConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *activityClassName;
@property (nonatomic) long long encodingType;
@property (retain, nonatomic) NSString *overrideTitle;
@property (retain, nonatomic) NSAttributedString *_activityFooterText;
@property (nonatomic) BOOL isCapabilityBasedActivity;
@property (readonly, nonatomic) NSUUID *activityUUID;
@property (readonly, nonatomic) long long activityCategory;
@property (readonly, nonatomic) NSString *activityTitle;
@property (readonly, nonatomic) NSString *activityType;
@property (readonly, nonatomic) NSString *fallbackActivityType;
@property (readonly, nonatomic) struct CGSize { double width; double height; } preferredThumbnailSize;
@property (readonly, nonatomic) BOOL activitySupportsPromiseURLs;
@property (readonly, nonatomic) long long defaultSortGroup;
@property (readonly, nonatomic) BOOL appIsDocumentTypeOwner;
@property (readonly, nonatomic) unsigned long long indexInApplicationDefinedActivities;
@property (readonly, nonatomic) UIImage *activityImage;
@property (readonly, nonatomic) UIImage *actionImage;
@property (readonly, nonatomic) NSString *systemImageName;
@property (readonly, nonatomic) NSString *defaultActivityTitle;
@property (readonly, nonatomic) NSString *positionBeforeActivityType;

+ (id)configurationForActivity:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)activityTitle;
- (id)initWithCoder:(id)a0;
- (id)_init;
- (void).cxx_destruct;
- (void)_collectPropertiesFromAttributesOfUnderlyingActivity:(id)a0;
- (void)_decodeBasicPropertiesWithCoder:(id)a0;
- (void)_decodeForEncodingByClassNameWithCoder:(id)a0;
- (void)_decodeForEncodingByPropertiesWithCoder:(id)a0;
- (void)_encodeBasicPropertiesWithCoder:(id)a0;
- (void)_encodeByClassNameWithCoder:(id)a0;
- (void)_encodeByPropertiesWithCoder:(id)a0;
- (void)_validateProperties;
- (id)initWithActivity:(id)a0 encodingType:(long long)a1;
- (void)updateConfigurationWithOverrideTitle:(id)a0;

@end
