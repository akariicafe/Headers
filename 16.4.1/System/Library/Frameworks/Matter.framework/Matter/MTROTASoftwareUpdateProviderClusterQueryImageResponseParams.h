@class NSNumber, NSString, NSData;

@interface MTROTASoftwareUpdateProviderClusterQueryImageResponseParams : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *status;
@property (copy, nonatomic) NSNumber *delayedActionTime;
@property (copy, nonatomic) NSString *imageURI;
@property (copy, nonatomic) NSNumber *softwareVersion;
@property (copy, nonatomic) NSString *softwareVersionString;
@property (copy, nonatomic) NSData *updateToken;
@property (copy, nonatomic) NSNumber *userConsentNeeded;
@property (copy, nonatomic) NSData *metadataForRequestor;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
