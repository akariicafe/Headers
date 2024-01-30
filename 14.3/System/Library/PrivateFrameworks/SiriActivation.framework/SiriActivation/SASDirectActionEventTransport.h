@class NSNumber;

@interface SASDirectActionEventTransport : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSNumber *event;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (long long)directActionEvent;
- (void)encodeWithCoder:(id)a0;
- (id)initWithAFDirectActionEvent:(long long)a0;

@end
