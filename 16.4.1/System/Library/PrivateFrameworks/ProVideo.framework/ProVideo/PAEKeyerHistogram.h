@interface PAEKeyerHistogram : NSObject <NSSecureCoding> {
    void *_histogram;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (id)init;
- (void)setHistogram:(void *)a0;
- (void *)getHistogram;
- (void)setHistogramArray:(id)a0;

@end
