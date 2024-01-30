@class CKContainerOptions, NSArray, CKContainerID, NSString, CKAccountOverrideInfo;

@interface CKContainerSetupInfo : NSObject <NSItemProviderReading, NSItemProviderWriting, NSSecureCoding, NSCopying>

@property (class, readonly, copy, nonatomic) NSArray *readableTypeIdentifiersForItemProvider;
@property (class, readonly, copy, nonatomic) NSArray *writableTypeIdentifiersForItemProvider;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) CKAccountOverrideInfo *accountOverrideInfo;
@property (readonly, copy, nonatomic) CKAccountOverrideInfo *accountInfoOverride;
@property (readonly, copy, nonatomic) CKContainerOptions *containerOptions;
@property (readonly, copy, nonatomic) CKContainerID *containerID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSArray *writableTypeIdentifiersForItemProvider;

+ (id)objectWithItemProviderData:(id)a0 typeIdentifier:(id)a1 error:(id *)a2;

- (void)encodeWithCoder:(id)a0;
- (id)initWithContainerID:(id)a0 options:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)_stripAccountInfo;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)hashString;
- (long long)itemProviderVisibilityForRepresentationWithTypeIdentifier:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)loadDataWithTypeIdentifier:(id)a0 forItemProviderCompletionHandler:(id /* block */)a1;
- (id)copyWithoutAccountInfo;
- (void).cxx_destruct;

@end
