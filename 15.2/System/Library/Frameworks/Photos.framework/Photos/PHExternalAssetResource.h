@class NSString, NSData, PHAssetResourceCreationOptions, NSURL;

@interface PHExternalAssetResource : NSObject <PHCPLAssetResource> {
    long long _sandboxExtensionHandle;
}

@property (readonly, nonatomic) long long type;
@property (retain, nonatomic) NSData *data;
@property (copy, nonatomic) PHAssetResourceCreationOptions *creationOptions;
@property (readonly, nonatomic) BOOL isLibraryAssetResource;
@property (nonatomic, setter=_setDuplicateAllowsReadAccess:) BOOL duplicateAllowsReadAccess;
@property (copy, nonatomic) NSURL *fileURL;
@property (nonatomic) long long pixelWidth;
@property (nonatomic) long long pixelHeight;
@property (readonly, nonatomic) NSString *originalFilename;
@property (readonly, nonatomic) NSString *uniformTypeIdentifier;
@property (readonly, nonatomic) unsigned long long cplResourceType;

+ (id)assetResourceForDuplicatingAssetResource:(id)a0 newResourceType:(long long)a1 asData:(BOOL)a2 error:(id *)a3;
+ (id)assetResourceForDuplicatingAssetResource:(id)a0 asData:(BOOL)a1 error:(id *)a2;
+ (unsigned long long)probableCPLResourceTypeFromAssetResourceType:(long long)a0;

- (void)_consumeSandboxExtension:(id)a0;
- (id)initWithResourceType:(long long)a0;
- (id)initWithPropertyListRepresentation:(id)a0;
- (id)propertyListRepresentation;
- (void)_releaseSandboxExtension;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)_issueSandboxExtension;

@end
