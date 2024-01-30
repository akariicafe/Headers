@class NSString;

@interface WFContextualActionDisplaySlot : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) unsigned long long parameterIndex;
@property (readonly, copy, nonatomic) NSString *string;

- (void)encodeWithCoder:(id)a0;
- (id)initWithType:(unsigned long long)a0 parameterIndex:(unsigned long long)a1 string:(id)a2;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
