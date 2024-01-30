@interface PKPaymentBackgroundDownloadRecord : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long taskType;
@property (nonatomic) long long retryCount;

+ (id)taskWithType:(long long)a0;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
