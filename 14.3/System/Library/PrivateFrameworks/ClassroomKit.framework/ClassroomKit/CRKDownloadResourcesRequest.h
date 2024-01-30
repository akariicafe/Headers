@class DMFControlGroupIdentifier, NSArray, NSString, NSData;

@interface CRKDownloadResourcesRequest : CATTaskRequest

@property (copy, nonatomic) DMFControlGroupIdentifier *courseIdentifier;
@property (copy, nonatomic) NSArray *resources;
@property (copy, nonatomic) NSString *resourcesDescription;
@property (retain, nonatomic) NSData *previewImageData;
@property (nonatomic) BOOL openAfterDownloadCompletes;
@property (copy, nonatomic) NSString *sourceBundleIdentifier;

+ (BOOL)supportsSecureCoding;
+ (Class)whitelistedClassForResultObject;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
