@class NSString;

@interface DACUnknownActivityPolicy : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long options;
@property (readonly, copy, nonatomic) NSString *audioSessionCategory;
@property (readonly, copy, nonatomic) NSString *audioSessionMode;
@property (readonly, nonatomic) unsigned long long audioSessionOptions;

+ (id)audioPolicyWithOptions:(unsigned long long)a0 audioSessionCategory:(id)a1 audioSessionMode:(id)a2 audioSessionOptions:(unsigned long long)a3;
+ (id)policyWithOptions:(unsigned long long)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqualToUnknownActivityPolicy:(id)a0;
- (id)_initWithOptions:(unsigned long long)a0 audioSessionCategory:(id)a1 audioSessionMode:(id)a2 audioSessionOptions:(unsigned long long)a3;

@end
