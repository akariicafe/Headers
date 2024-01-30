@class NSURL, NSString;

@interface ASDEnterpriseAppMetadata : NSObject <ASDAppMetadata, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property BOOL hideUserPrompts;
@property (readonly) NSURL *manifestURL;
@property (readonly) long long metadataType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithManifestURL:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
