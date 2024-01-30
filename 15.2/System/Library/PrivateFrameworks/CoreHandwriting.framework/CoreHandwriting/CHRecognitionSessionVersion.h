@interface CHRecognitionSessionVersion : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long sessionVersion;
@property (readonly, nonatomic) long long sessionResultVersion;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSessionVersion:(long long)a0 sessionResultVersion:(long long)a1;
- (BOOL)isValidSessionVersion;
- (BOOL)isValidSessionResultVersion;

@end
