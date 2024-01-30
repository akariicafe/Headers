@class NSString, NSSet, NSURL, NSBundle, UIImage;

@interface SLRemoteService : SLService <NSSecureCoding> {
    long long _maximumVideoCount;
    UIImage *_activityImage;
    NSBundle *_serviceBundle;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSString *serviceTypeIdentifier;
@property (retain) NSString *accountTypeIdentifier;
@property (retain) NSString *localizedServiceName;
@property (retain) NSString *activityViewIconResourceName;
@property BOOL serviceRegionTargetIsChina;
@property long long authenticationStyle;
@property long long maximumURLCount;
@property long long maximumImageCount;
@property long long maximumImageDataSize;
@property (nonatomic) long long maximumVideoCount;
@property long long maximumVideoDataSize;
@property long long maximumVideoTimeLimit;
@property (retain) NSSet *supportedImageAssetURLSchemes;
@property (retain) NSSet *supportedVideoAssetURLSchemes;
@property BOOL addDeviceClassToRequest;
@property (retain) NSString *activityImageName;
@property (retain) NSURL *serviceBundleURL;
@property (readonly) NSBundle *serviceBundle;

+ (id)_cachedServices;
+ (id)remoteServiceForTypeIdentifier:(id)a0;
+ (id)remoteServices;
+ (id)_cachedServiceWithType:(id)a0;

- (id)serviceType;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)activityImage;
- (id)initWithCoder:(id)a0;
- (id)activityTitle;
- (id)composeViewController;
- (void)addExtraParameters:(id)a0 forRequest:(id)a1;
- (BOOL)isFirstClassService;
- (long long)maximumVideoCount;
- (BOOL)supportsImageURL:(id)a0;
- (BOOL)supportsVideoURL:(id)a0;
- (id)initWithServiceBundle:(id)a0 socialInfoDictionary:(id)a1;
- (BOOL)infoDictHasRequiredKeys:(id)a0;
- (long long)_authenticationStyleFromAuthenticationStyleIdentifier:(id)a0;
- (id)_setFromArrayWithKey:(id)a0 inDictionary:(id)a1;
- (id)integerPropertyKeyMappings;
- (id)_requiredInfoDictKeys;
- (BOOL)_isValidAuthenicationStyleIdentifier:(id)a0;
- (id)_authenticationStyleIdentifierMappings;
- (id)_encodableStringProperties;
- (BOOL)_isSupportedURL:(id)a0 withSupportedSchemes:(id)a1;
- (id)_activityImageForImageResourceName:(id)a0 inBundle:(id)a1;
- (void)setMaximumVideoCount:(long long)a0;

@end
