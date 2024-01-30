@interface AWAttentionLostEvent : AWAttentionEvent <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double attentionLostTimeout;
@property (readonly, nonatomic) id associatedObject;

- (void)encodeWithCoder:(id)a0;
- (id)initWithTimestamp:(double)a0 tagIndex:(unsigned long long)a1 attentionLostTimeout:(double)a2;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)validateMask;
- (void)updateWithConfig:(id)a0;

@end
