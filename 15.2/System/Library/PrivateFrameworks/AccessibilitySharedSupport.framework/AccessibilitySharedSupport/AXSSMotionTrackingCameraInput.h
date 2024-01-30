@class NSString;

@interface AXSSMotionTrackingCameraInput : AXSSMotionTrackingInput

@property (copy, nonatomic) NSString *captureDeviceUniqueID;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) BOOL isBuiltIn;

+ (BOOL)supportsSecureCoding;
+ (id)captureDeviceForMotionTrackingInput:(id)a0;
+ (id)motionTrackingCameraInputWithAVCaptureDevice:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)uniqueIdentifier;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isCamera;
- (id)initWithCoder:(id)a0;
- (id)plistDictionary;
- (id)initWithPlistDictionary:(id)a0;
- (unsigned long long)trackingType;
- (BOOL)supportsExpressions;
- (id)initWithCaptureDeviceUniqueID:(id)a0 name:(id)a1 isBuiltIn:(BOOL)a2;

@end
