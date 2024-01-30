@class NSURL, NSSecurityScopedURLWrapper;
@protocol NSSecureCoding;

@interface WFFileStorageServiceResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSURL *lifecycleManagedURL;
@property (readonly, nonatomic) NSSecurityScopedURLWrapper *wrappedURL;
@property (readonly, nonatomic) id<NSSecureCoding> metadataObject;

+ (void)getResultWithFileURL:(id)a0 consumingBundleID:(id)a1 resultBlock:(id /* block */)a2;
+ (id)resultWithMetadata:(id)a0;
+ (id)possibleMetadataClasses;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithFileURL:(id)a0 metadataObject:(id)a1;
- (id)initWithWrappedURL:(id)a0 metadataObject:(id)a1;

@end
