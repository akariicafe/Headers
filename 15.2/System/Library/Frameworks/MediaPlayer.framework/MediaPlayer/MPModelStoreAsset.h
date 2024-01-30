@class NSString;

@interface MPModelStoreAsset : MPModelObject

@property (nonatomic) long long endpointType;
@property (copy, nonatomic) NSString *redownloadParameters;
@property (nonatomic, getter=isRedownloadable) BOOL redownloadable;
@property (nonatomic) unsigned long long accountIdentifier;
@property (nonatomic) BOOL shouldReportPlayEvents;
@property (nonatomic, getter=isSubscriptionRequired) BOOL subscriptionRequired;
@property (readonly, nonatomic) BOOL needsUserUpload;

+ (id)__redownloadable_KEY;
+ (id)allSupportedProperties;
+ (id)__endpointType_KEY;
+ (id)__redownloadParameters_KEY;
+ (id)__needsUserUpload_KEY;
+ (id)__accountIdentifier_KEY;
+ (id)__shouldReportPlayEvents_KEY;
+ (id)__subscriptionRequired_KEY;


@end
