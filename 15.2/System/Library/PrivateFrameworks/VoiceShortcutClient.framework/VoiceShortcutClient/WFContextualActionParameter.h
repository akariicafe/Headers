@class NSString, NSDictionary;

@interface WFContextualActionParameter : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *type;
@property (readonly, copy, nonatomic) NSString *displayString;
@property (readonly, nonatomic) NSDictionary *metadata;

- (void)encodeWithCoder:(id)a0;
- (id)initWithType:(id)a0 displayString:(id)a1 metadata:(id)a2;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
