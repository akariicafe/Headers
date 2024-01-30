@interface XBLaunchImageError : NSError

@property (readonly, getter=isFatal) BOOL fatal;
@property (readonly) BOOL shouldDeny;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCode:(long long)a0 bundleID:(id)a1 reason:(id)a2 fatal:(BOOL)a3;
- (id)initWithCoder:(id)a0;

@end
