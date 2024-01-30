@class NSString;

@interface WFFileProviderLocation : WFFileLocation

@property (readonly, nonatomic) NSString *fileProviderDomainID;
@property (readonly, nonatomic) NSString *crossDeviceItemID;
@property (readonly, nonatomic) NSString *appContainerBundleIdentifier;

+ (BOOL)supportsSecureCoding;
+ (id)subpathFromURL:(id)a0;
+ (BOOL)canRepresentURL:(id)a0;
+ (BOOL)canRepresentURL:(id)a0 item:(id)a1 parentItems:(id)a2;
+ (id)locationWithSerializedRepresentation:(id)a0;
+ (id)subpathFromURL:(id)a0 item:(id)a1;
+ (Class)supportedClassForURL:(id)a0;

- (id)initWithURL:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)serializedRepresentation;
- (void).cxx_destruct;
- (id)initWithFileProviderDomainID:(id)a0 crossDeviceItemID:(id)a1 appContainerBundleIdentifier:(id)a2 relativeSubpath:(id)a3;
- (BOOL)isSupportedOnCurrentPlatform;
- (id)resolveCrossDeviceItemIDWithError:(id *)a0;
- (id)resolveLocationFromProviderDomainID;
- (id)resolveLocationWithError:(id *)a0;
- (BOOL)shouldShowUsersDuringDisplay:(id)a0;

@end
