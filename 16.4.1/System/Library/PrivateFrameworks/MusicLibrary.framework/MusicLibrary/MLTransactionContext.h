@class NSString, ML3DatabasePrivacyContext;

@interface MLTransactionContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *path;
@property (readonly, nonatomic) unsigned long long priorityLevel;
@property (readonly, nonatomic) unsigned long long options;
@property (readonly, nonatomic) ML3DatabasePrivacyContext *privacyContext;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithPrivacyContext:(id)a0 path:(id)a1 priorityLevel:(unsigned long long)a2 options:(unsigned long long)a3;

@end
