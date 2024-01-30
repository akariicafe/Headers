@class NSString, DDRResetOptions;

@interface DDRResetRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long mode;
@property (readonly, nonatomic) DDRResetOptions *options;
@property (readonly, copy, nonatomic) NSString *reason;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithMode:(long long)a0 options:(id)a1 reason:(id)a2;
- (void)encodeWithCoder:(id)a0;

@end
