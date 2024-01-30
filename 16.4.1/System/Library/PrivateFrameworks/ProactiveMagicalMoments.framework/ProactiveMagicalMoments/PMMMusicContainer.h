@class NSString, NSDate;

@interface PMMMusicContainer : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *bundleId;
@property (readonly, nonatomic) NSString *trackIdentifier;
@property (readonly, nonatomic) NSDate *playTime;
@property (readonly, nonatomic) NSDate *pauseTime;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setPauseIfUnset;
- (void)setPlayingWithBundleId:(id)a0 trackIdentifier:(id)a1 playTime:(id)a2;
- (id)description;
- (void).cxx_destruct;

@end
