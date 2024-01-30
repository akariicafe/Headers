@class NSString;

@interface GCGameIntentSettings : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long type;
@property (nonatomic) BOOL enabled;
@property (copy, nonatomic) NSString *gameBundleID;
@property (nonatomic) long long appLibraryPod;

+ (id)appLibrarySettings:(BOOL)a0 appLibraryPod:(long long)a1;
+ (id)gameSettings:(BOOL)a0 gameBundleID:(id)a1;
+ (id)homeScreenSettings:(BOOL)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
