@class NSString;

@interface GCGameIntentSettings : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long type;
@property (nonatomic) BOOL enabled;
@property (copy, nonatomic) NSString *gameBundleID;
@property (nonatomic) long long appLibraryPod;

+ (id)homeScreenSettings:(BOOL)a0;
+ (id)gameSettings:(BOOL)a0 gameBundleID:(id)a1;
+ (id)appLibrarySettings:(BOOL)a0 appLibraryPod:(long long)a1;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
