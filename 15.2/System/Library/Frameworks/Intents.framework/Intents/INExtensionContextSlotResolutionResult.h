@class NSData;

@interface INExtensionContextSlotResolutionResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long result;
@property (readonly, nonatomic) NSData *data;

- (void)encodeWithCoder:(id)a0;
- (id)initWithResult:(long long)a0 data:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
