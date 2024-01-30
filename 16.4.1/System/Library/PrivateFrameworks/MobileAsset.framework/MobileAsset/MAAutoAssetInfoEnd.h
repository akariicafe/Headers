@class NSString;

@interface MAAutoAssetInfoEnd : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *endLockReason;
@property (readonly, nonatomic) long long endLockCount;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)summary;
- (id)initWithLockReason:(id)a0 endingLockCount:(long long)a1;
- (id)description;
- (void).cxx_destruct;

@end
