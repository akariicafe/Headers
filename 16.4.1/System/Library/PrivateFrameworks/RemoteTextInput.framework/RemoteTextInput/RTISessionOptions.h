@interface RTISessionOptions : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL shouldResign;
@property (nonatomic) BOOL animated;
@property (nonatomic) long long offscreenDirection;
@property (nonatomic) BOOL enhancedWindowingModeEnabled;

+ (id)defaultBeginOptions;
+ (id)defaultEndOptions;
+ (id)defaultOptions;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;

@end
