@protocol NSSecureCoding;

@interface SCROCallback : NSObject <NSSecureCoding> {
    int _key;
    id<NSSecureCoding> _object;
    BOOL _isAtomic;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (int)key;
- (void)encodeWithCoder:(id)a0;
- (id)object;
- (id)initWithCoder:(id)a0;
- (id)initWithKey:(int)a0 object:(id)a1;
- (BOOL)isAtomic;
- (void).cxx_destruct;
- (void)postToHandler:(id)a0;
- (void)setIsAtomic:(BOOL)a0;

@end
