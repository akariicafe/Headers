@class NSString;

@interface WBSHideMyEmailRecord : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *domain;
@property (readonly, nonatomic) unsigned long long state;
@property (readonly, nonatomic) NSString *privateEmailAddress;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithDomain:(id)a0 state:(unsigned long long)a1 privateEmailAddress:(id)a2;

@end
