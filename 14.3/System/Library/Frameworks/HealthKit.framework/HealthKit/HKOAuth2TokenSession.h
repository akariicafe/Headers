@class NSString, NSUUID;

@interface HKOAuth2TokenSession : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *code;
@property (readonly, copy, nonatomic) NSString *query;
@property (readonly, copy, nonatomic) NSString *requestedScope;
@property (readonly, copy, nonatomic) NSUUID *state;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCode:(id)a0 query:(id)a1 requestedScope:(id)a2 state:(id)a3;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
