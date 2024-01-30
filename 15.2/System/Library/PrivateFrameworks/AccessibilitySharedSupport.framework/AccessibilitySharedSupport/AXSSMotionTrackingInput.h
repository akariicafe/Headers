@class NSString, NSDictionary;

@interface AXSSMotionTrackingInput : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *uniqueIdentifier;
@property (readonly, copy, nonatomic) NSDictionary *plistDictionary;
@property (readonly, nonatomic) BOOL isHIDDevice;
@property (readonly, nonatomic) BOOL isCamera;
@property (readonly, nonatomic) BOOL isVideoFile;
@property (readonly, nonatomic) BOOL supportsExpressions;
@property (readonly, nonatomic) BOOL supportsLookAtPoint;
@property (readonly, nonatomic) unsigned long long trackingType;

+ (id)motionTrackingInputFromPlistDictionary:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithPlistDictionary:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqualToMotionTrackingInput:(id)a0;

@end
