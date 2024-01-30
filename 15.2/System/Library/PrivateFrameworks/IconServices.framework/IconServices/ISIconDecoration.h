@class NSURL, NSUUID, NSString;
@protocol ISScalableCompositorResource;

@interface ISIconDecoration : NSObject <ISIconDecorationInternal, ISIconDecoration, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSURL *resourceURL;
@property (readonly) NSUUID *uuid;
@property (readonly) NSString *identifier;
@property (readonly) unsigned long long identifierKind;
@property (readonly) id<ISScalableCompositorResource> compositorResource;
@property (readonly) NSUUID *resourceToken;
@property long long position;
@property long long mode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithBundleIdentifier:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithType:(id)a0;
- (id)imageForDescriptor:(id)a0;
- (void)prepareImagesForDescriptors:(id)a0;
- (id)initWithKind:(unsigned long long)a0 identifier:(id)a1;
- (id)initWithResourceURL:(id)a0;
- (id)resourceFingerprint;

@end
