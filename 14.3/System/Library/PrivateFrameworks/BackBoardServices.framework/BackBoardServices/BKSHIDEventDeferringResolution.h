@class NSString, BKSHIDEventDeferringToken, BKSHIDEventDisplay, BKSHIDEventDeferringEnvironment;

@interface BKSHIDEventDeferringResolution : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) BKSHIDEventDisplay *display;
@property (readonly, copy, nonatomic) BKSHIDEventDeferringEnvironment *environment;
@property (readonly, nonatomic) long long versionedPID;
@property (readonly, nonatomic) int pid;
@property (readonly, copy, nonatomic) BKSHIDEventDeferringToken *token;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;

+ (id)build:(id /* block */)a0;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithDisplay:(id)a0 environment:(id)a1 versionedPID:(long long)a2 pid:(int)a3 token:(id)a4;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)modifiedResolution:(id /* block */)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
