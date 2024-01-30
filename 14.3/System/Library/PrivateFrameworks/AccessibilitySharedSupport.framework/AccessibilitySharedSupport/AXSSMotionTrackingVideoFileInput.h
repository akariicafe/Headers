@class NSString;

@interface AXSSMotionTrackingVideoFileInput : AXSSMotionTrackingInput

@property (copy, nonatomic) NSString *_name;
@property (readonly, copy, nonatomic) NSString *name;

+ (BOOL)supportsSecureCoding;
+ (id)videoFileInputWithName:(id)a0;

- (void).cxx_destruct;
- (BOOL)isVideoFile;
- (id)plistDictionary;
- (id)initWithPlistDictionary:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)uniqueIdentifier;
- (id)description;
- (id)initWithName:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (unsigned long long)trackingType;
- (BOOL)supportsExpressions;

@end
