@interface PBResponseMetadata : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long authorizationMachAbsoluteStartTime;
@property (readonly, nonatomic) unsigned long long authorizationMachAbsoluteEndTime;
@property (readonly, nonatomic, getter=isAuthorizationAdmonished) BOOL authorizationAdmonished;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAuthorizationStartTime:(unsigned long long)a0 authorizationEndTime:(unsigned long long)a1 authorizationAdmonished:(BOOL)a2;

@end
