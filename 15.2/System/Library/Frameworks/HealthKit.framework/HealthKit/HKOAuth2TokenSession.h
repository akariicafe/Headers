@class NSString, NSUUID;

@interface HKOAuth2TokenSession : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *code;
@property (readonly, copy, nonatomic) NSString *query;
@property (readonly, copy, nonatomic) NSString *requestedScope;
@property (readonly, copy, nonatomic) NSUUID *state;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCode:(id)a0 query:(id)a1 requestedScope:(id)a2 state:(id)a3;
- (unsigned long long)hash;

@end
