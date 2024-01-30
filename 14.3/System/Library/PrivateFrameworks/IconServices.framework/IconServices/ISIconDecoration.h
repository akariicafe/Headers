@class NSUUID, NSString;

@interface ISIconDecoration : NSObject <ISIconDecorationInternal, ISIconDecoration, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSUUID *uuid;
@property (readonly) NSString *identifier;
@property (readonly) unsigned long long identifierKind;
@property (readonly) NSUUID *resourceFingerprint;
@property long long position;
@property long long mode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)imageForDescriptor:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithType:(id)a0;
- (id)initWithBundleIdentifier:(id)a0;
- (void)prepareImagesForDescriptors:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
