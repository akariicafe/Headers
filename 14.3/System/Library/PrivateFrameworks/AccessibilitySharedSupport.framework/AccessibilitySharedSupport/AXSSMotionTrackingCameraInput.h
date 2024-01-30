@class NSString;

@interface AXSSMotionTrackingCameraInput : AXSSMotionTrackingInput

@property (copy, nonatomic) NSString *captureDeviceUniqueID;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) BOOL isBuiltIn;

+ (BOOL)supportsSecureCoding;
+ (id)captureDeviceForMotionTrackingInput:(id)a0;
+ (id)motionTrackingCameraInputWithAVCaptureDevice:(id)a0;

- (void).cxx_destruct;
- (id)plistDictionary;
- (id)initWithPlistDictionary:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isCamera;
- (id)uniqueIdentifier;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (unsigned long long)trackingType;
- (BOOL)supportsExpressions;
- (id)initWithCaptureDeviceUniqueID:(id)a0 name:(id)a1 isBuiltIn:(BOOL)a2;

@end
