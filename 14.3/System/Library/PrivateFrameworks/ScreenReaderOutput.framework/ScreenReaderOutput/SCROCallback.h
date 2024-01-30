@protocol NSSecureCoding;

@interface SCROCallback : NSObject <NSSecureCoding> {
    int _key;
    id<NSSecureCoding> _object;
    BOOL _isAtomic;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)initWithKey:(int)a0 object:(id)a1;
- (void).cxx_destruct;
- (BOOL)isAtomic;
- (id)object;
- (id)initWithCoder:(id)a0;
- (int)key;
- (void)encodeWithCoder:(id)a0;
- (void)postToHandler:(id)a0;
- (void)setIsAtomic:(BOOL)a0;

@end
