@interface SYActivityObserverContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL needsCacheUpdate;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
