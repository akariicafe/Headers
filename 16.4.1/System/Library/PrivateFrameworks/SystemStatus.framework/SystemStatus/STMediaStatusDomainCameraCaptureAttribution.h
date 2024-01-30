@class STMediaStatusDomainCameraDescriptor, NSString, STActivityAttribution;

@interface STMediaStatusDomainCameraCaptureAttribution : NSObject <NSSecureCoding, BSDescriptionProviding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) STMediaStatusDomainCameraDescriptor *cameraDescriptor;
@property (readonly, copy, nonatomic) STActivityAttribution *activityAttribution;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)initWithCameraDescriptor:(id)a0 activityAttribution:(id)a1;

@end
