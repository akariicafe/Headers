@class NSUUID, NSString;

@interface _EXItemProviderExtensionVendorLoadOperator : NSObject <_EXItemProviderLoading>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSUUID *identifier;
@property (copy, nonatomic) NSUUID *extensionContextIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadItemForTypeIdentifier:(id)a0 completionHandler:(id /* block */)a1 expectedValueClass:(Class)a2 options:(id)a3;
- (void)loadPreviewImageWithCompletionHandler:(id /* block */)a0 expectedValueClass:(Class)a1 options:(id)a2;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (id)initWithExtensionContextIdentifier:(id)a0;

@end
