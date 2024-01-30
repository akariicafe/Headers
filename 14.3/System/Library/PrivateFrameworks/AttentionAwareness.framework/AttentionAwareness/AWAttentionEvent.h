@interface AWAttentionEvent : NSObject <NSSecureCoding> {
    unsigned long long _tagIndex;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long eventMask;
@property (readonly, nonatomic) double timestamp;
@property (readonly, nonatomic) id tag;

- (unsigned long long)tagIndex;
- (void)validateMask;
- (void).cxx_destruct;
- (void)updateWithConfig:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)initWithTimestamp:(double)a0 tagIndex:(unsigned long long)a1 eventMask:(unsigned long long)a2;
- (void)encodeWithCoder:(id)a0;

@end
