@interface PAEKeyerHistogram : NSObject <NSSecureCoding> {
    void *_histogram;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void)setHistogram:(void *)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (void *)getHistogram;
- (void)setHistogramArray:(id)a0;

@end
